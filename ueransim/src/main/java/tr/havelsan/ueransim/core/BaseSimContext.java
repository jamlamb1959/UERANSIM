/*
 * MIT License
 *
 * Copyright (c) 2020 ALİ GÜNGÖR
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * @author Ali Güngör (aligng1620@gmail.com)
 */

package tr.havelsan.ueransim.core;

import tr.havelsan.ueransim.events.SimulationEvent;
import tr.havelsan.ueransim.utils.Logging;
import tr.havelsan.ueransim.utils.Tag;

import java.util.ArrayDeque;
import java.util.Queue;
import java.util.UUID;

public class BaseSimContext<T extends SimulationEvent> {

    public final UUID simCtxId = UUID.randomUUID();
    private final Queue<T> eventQueue = new ArrayDeque<>();

    public boolean hasEvent() {
        synchronized (this) {
            return !eventQueue.isEmpty();
        }
    }

    public void pushEvent(T event) {
        Logging.info(Tag.EVENT, "Pushed event: %s", event);
        synchronized (this) {
            eventQueue.add(event);
        }
    }

    public T popEvent() {
        synchronized (this) {
            return eventQueue.poll();
        }
    }
}
