/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc;

public enum RrcDataUnitType {
    AccessStratumRelease(1),
    AdditionalSpectrumEmission(2),
    AffectedCarrierFreqCombEUTRA(3),
    AffectedCarrierFreqCombInfoMRDC(4),
    AffectedCarrierFreqCombNR(5),
    AggregatedBandwidth(6),
    Alpha(7),
    AMF_Identifier(8),
    ARFCN_ValueEUTRA(9),
    ARFCN_ValueNR(10),
    AS_Config(11),
    AS_Context(12),
    //asn_constant(13),
    BandCombination(14),
    BandCombinationIndex(15),
    BandCombinationInfo(16),
    BandCombinationInfoList(17),
    BandCombinationInfoSN(18),
    BandCombinationList(19),
    BandCombinationList_v1540(20),
    BandCombinationList_v1550(21),
    BandCombinationList_v1560(22),
    BandCombination_v1540(23),
    BandCombination_v1550(24),
    BandCombination_v1560(25),
    BandEntryIndex(26),
    BandNR(27),
    BandParameters(28),
    BandParameters_v1540(29),
    BCCH_BCH_Message(30),
    BCCH_BCH_MessageType(31),
    BCCH_Config(32),
    BCCH_DL_SCH_Message(33),
    BCCH_DL_SCH_MessageType(34),
    BeamFailureRecoveryConfig(35),
    BeamManagementSSB_CSI_RS(36),
    BetaOffsets(37),
    BFR_CSIRS_Resource(38),
    BFR_SSB_Resource(39),
    BSR_Config(40),
    BWP_DownlinkCommon(41),
    BWP_DownlinkDedicated(42),
    BWP_Downlink(43),
    BWP(44),
    BWP_Id(45),
    BWP_UplinkCommon(46),
    BWP_UplinkDedicated(47),
    BWP_Uplink(48),
    CA_BandwidthClassEUTRA(49),
    CA_BandwidthClassNR(50),
    CandidateServingFreqListEUTRA(51),
    CandidateServingFreqListNR(52),
    CA_ParametersEUTRA(53),
    CA_ParametersEUTRA_v1560(54),
    CA_ParametersNRDC(55),
    CA_ParametersNR(56),
    CA_ParametersNR_v1540(57),
    CA_ParametersNR_v1550(58),
    CA_ParametersNR_v1560(59),
    CarrierFreqEUTRA(60),
    CarrierFreqListEUTRA(61),
    CarrierInfoNR(62),
    CellAccessRelatedInfo_EUTRA_5GC(63),
    CellAccessRelatedInfo_EUTRA_EPC(64),
    CellAccessRelatedInfo(65),
    CellGroupConfig(66),
    CellGroupId(67),
    CellIdentity_EUTRA_5GC(68),
    CellIdentity(69),
    CellReselectionPriorities(70),
    CellReselectionPriority(71),
    CellReselectionSubPriority(72),
    CellsToAddMod(73),
    CellsToAddModList(74),
    CellsTriggeredList(75),
    CFRA_CSIRS_Resource(76),
    CFRA(77),
    CFRA_SSB_Resource(78),
    CG_Config(79),
    CG_Config_IEs(80),
    CG_ConfigInfo(81),
    CG_ConfigInfo_IEs(82),
    CG_ConfigInfo_v1540_IEs(83),
    CG_ConfigInfo_v1560_IEs(84),
    CG_Config_v1540_IEs(85),
    CG_Config_v1560_IEs(86),
    CGI_InfoEUTRA(87),
    CGI_InfoNR(88),
    CG_UCI_OnPUSCH(89),
    CipheringAlgorithm(90),
    CodebookConfig(91),
    CodebookParameters(92),
    ConfigRestrictInfoSCG(93),
    ConfigRestrictModReqSCG(94),
    ConfiguredGrantConfig(95),
    ConnEstFailureControl(96),
    ControlResourceSet(97),
    ControlResourceSetId(98),
    ControlResourceSetZero(99),
    CounterCheck(100),
    CounterCheck_IEs(101),
    CounterCheckResponse(102),
    CounterCheckResponse_IEs(103),
    CrossCarrierSchedulingConfig(104),
    CSI_AperiodicTriggerState(105),
    CSI_AperiodicTriggerStateList(106),
    CSI_AssociatedReportConfigInfo(107),
    CSI_FrequencyOccupation(108),
    CSI_IM_Resource(109),
    CSI_IM_ResourceId(110),
    CSI_IM_ResourceSet(111),
    CSI_IM_ResourceSetId(112),
    CSI_MeasConfig(113),
    CSI_ReportConfig(114),
    CSI_ReportConfigId(115),
    CSI_ReportFramework(116),
    CSI_ReportPeriodicityAndOffset(117),
    CSI_ResourceConfig(118),
    CSI_ResourceConfigId(119),
    CSI_ResourcePeriodicityAndOffset(120),
    CSI_RS_CellMobility(121),
    CSI_RS_ForTracking(122),
    CSI_RS_IM_ReceptionForFeedback(123),
    CSI_RS_Index(124),
    CSI_RS_ProcFrameworkForSRS(125),
    CSI_RS_ResourceConfigMobility(126),
    CSI_RS_ResourceMapping(127),
    CSI_RS_Resource_Mobility(128),
    CSI_SemiPersistentOnPUSCH_TriggerState(129),
    CSI_SemiPersistentOnPUSCH_TriggerStateList(130),
    CSI_SSB_ResourceSet(131),
    CSI_SSB_ResourceSetId(132),
    DataInactivityTimer(133),
    DedicatedNAS_Message(134),
    DelayBudgetReport(135),
    DL_AM_RLC(136),
    DL_CCCH_Message(137),
    DL_CCCH_MessageType(138),
    DL_DCCH_Message(139),
    DL_DCCH_MessageType(140),
    DLInformationTransfer(141),
    DLInformationTransfer_IEs(142),
    DL_UM_RLC(143),
    DMRS_DownlinkConfig(144),
    DMRS_UplinkConfig(145),
    DownlinkConfigCommon(146),
    DownlinkConfigCommonSIB(147),
    DownlinkPreemption(148),
    DRB_CountInfo(149),
    DRB_CountInfoList(150),
    DRB_CountMSB_Info(151),
    DRB_CountMSB_InfoList(152),
    DRB_Identity(153),
    DRB_ToAddMod(154),
    DRB_ToAddModList(155),
    DRB_ToReleaseList(156),
    DRX_Config(157),
    DRX_Info(158),
    DummyA(159),
    DummyB(160),
    DummyC(161),
    DummyD(162),
    DummyE(163),
    DummyF(164),
    DummyG(165),
    DummyH(166),
    DummyI(167),
    EstablishmentCause(168),
    EUTRA_AllowedMeasBandwidth(169),
    EUTRA_BlackCell(170),
    EUTRA_Cell(171),
    EUTRA_CellIndex(172),
    EUTRA_CellIndexList(173),
    EUTRA_FreqBlackCellList(174),
    EUTRA_FreqNeighCellInfo(175),
    EUTRA_FreqNeighCellList(176),
    EUTRA_MBSFN_SubframeConfig(177),
    EUTRA_MBSFN_SubframeConfigList(178),
    EUTRA_MultiBandInfo(179),
    EUTRA_MultiBandInfoList(180),
    EUTRA_NS_PmaxList(181),
    EUTRA_NS_PmaxValue(182),
    EUTRA_ParametersCommon(183),
    EUTRA_Parameters(184),
    EUTRA_ParametersXDD_Diff(185),
    EUTRA_PhysCellId(186),
    EUTRA_PhysCellIdRange(187),
    EUTRA_PresenceAntennaPort1(188),
    EUTRA_Q_OffsetRange(189),
    EUTRA_RSTD_Info(190),
    EUTRA_RSTD_InfoList(191),
    EventTriggerConfig(192),
    EventTriggerConfigInterRAT(193),
    FailureInfoRLC_Bearer(194),
    FailureInformation(195),
    FailureInformation_IEs(196),
    FailureReportSCG_EUTRA(197),
    FailureReportSCG(198),
    FeatureSetCombination(199),
    FeatureSetCombinationId(200),
    FeatureSetDownlink(201),
    FeatureSetDownlinkId(202),
    FeatureSetDownlinkPerCC(203),
    FeatureSetDownlinkPerCC_Id(204),
    FeatureSetDownlink_v1540(205),
    FeatureSetEntryIndex(206),
    FeatureSetEUTRA_DownlinkId(207),
    FeatureSetEUTRA_UplinkId(208),
    FeatureSet(209),
    FeatureSets(210),
    FeatureSetsPerBand(211),
    FeatureSetUplink(212),
    FeatureSetUplinkId(213),
    FeatureSetUplinkPerCC(214),
    FeatureSetUplinkPerCC_Id(215),
    FeatureSetUplinkPerCC_v1540(216),
    FeatureSetUplink_v1540(217),
    FilterCoefficient(218),
    FilterConfig(219),
    FreqBandIndicatorEUTRA(220),
    FreqBandIndicatorNR(221),
    FreqBandInformationEUTRA(222),
    FreqBandInformation(223),
    FreqBandInformationNR(224),
    FreqBandList(225),
    FreqPriorityEUTRA(226),
    FreqPriorityListEUTRA(227),
    FreqPriorityListNR(228),
    FreqPriorityNR(229),
    FreqSeparationClass(230),
    FrequencyInfoDL(231),
    FrequencyInfoDL_SIB(232),
    FrequencyInfoUL(233),
    FrequencyInfoUL_SIB(234),
    FR_Info(235),
    FR_InfoList(236),
    GapConfig(237),
    GeneralParametersMRDC_XDD_Diff(238),
    HandoverCommand(239),
    HandoverCommand_IEs(240),
    HandoverPreparationInformation(241),
    HandoverPreparationInformation_IEs(242),
    Hysteresis(243),
    IMS_ParametersCommon(244),
    IMS_ParametersFRX_Diff(245),
    IMS_Parameters(246),
    InitialUE_Identity(247),
    INT_ConfigurationPerServingCell(248),
    IntegrityProtAlgorithm(249),
    InterFreqBlackCellList(250),
    InterFreqCarrierFreqInfo(251),
    InterFreqCarrierFreqList(252),
    InterFreqNeighCellInfo(253),
    InterFreqNeighCellList(254),
    InterRAT_Parameters(255),
    IntraFreqBlackCellList(256),
    IntraFreqNeighCellInfo(257),
    IntraFreqNeighCellList(258),
    I_RNTI_Value(259),
    LocationMeasurementIndication(260),
    LocationMeasurementIndication_IEs(261),
    LocationMeasurementInfo(262),
    LogicalChannelConfig(263),
    LogicalChannelIdentity(264),
    MAC_CellGroupConfig(265),
    MAC_ParametersCommon(266),
    MAC_Parameters(267),
    MAC_ParametersXDD_Diff(268),
    MasterKeyUpdate(269),
    MCC(270),
    MCC_MNC_Digit(271),
    MeasAndMobParametersCommon(272),
    MeasAndMobParametersFRX_Diff(273),
    MeasAndMobParameters(274),
    MeasAndMobParametersMRDC_Common(275),
    MeasAndMobParametersMRDC_FRX_Diff(276),
    MeasAndMobParametersMRDC(277),
    MeasAndMobParametersMRDC_v1560(278),
    MeasAndMobParametersMRDC_XDD_Diff(279),
    MeasAndMobParametersMRDC_XDD_Diff_v1560(280),
    MeasAndMobParametersXDD_Diff(281),
    MeasConfig(282),
    MeasConfigMN(283),
    MeasConfigSN(284),
    MeasGapConfig(285),
    MeasGapSharingConfig(286),
    MeasGapSharingScheme(287),
    MeasId(288),
    MeasIdToAddMod(289),
    MeasIdToAddModList(290),
    MeasIdToRemoveList(291),
    MeasObjectEUTRA(292),
    MeasObjectId(293),
    MeasObjectNR(294),
    MeasObjectToAddMod(295),
    MeasObjectToAddModList(296),
    MeasObjectToRemoveList(297),
    MeasQuantityResultsEUTRA(298),
    MeasQuantityResults(299),
    MeasReportQuantity(300),
    MeasResult2EUTRA(301),
    MeasResult2NR(302),
    MeasResultCellListSFTD_EUTRA(303),
    MeasResultCellListSFTD_NR(304),
    MeasResultCellSFTD_NR(305),
    MeasResultEUTRA(306),
    MeasResultFreqListFailMRDC(307),
    MeasResultFreqList(308),
    MeasResultList2NR(309),
    MeasResultListEUTRA(310),
    MeasResultListNR(311),
    MeasResultNR(312),
    MeasResultSCG_Failure(313),
    MeasResultServFreqListEUTRA_SCG(314),
    MeasResultServFreqListNR_SCG(315),
    MeasResultServMO(316),
    MeasResultServMOList(317),
    MeasResultSFTD_EUTRA(318),
    MeasResults(319),
    MeasTiming(320),
    MeasTimingList(321),
    MeasTriggerQuantityEUTRA(322),
    MeasTriggerQuantity(323),
    MeasTriggerQuantityOffset(324),
    MeasurementReport(325),
    MeasurementReport_IEs(326),
    MeasurementTimingConfiguration(327),
    MeasurementTimingConfiguration_IEs(328),
    MeasurementTimingConfiguration_v1550_IEs(329),
    MIB(330),
    MIMO_LayersDL(331),
    MIMO_LayersUL(332),
    MIMO_ParametersPerBand(333),
    MNC(334),
    MobilityFromNRCommand(335),
    MobilityFromNRCommand_IEs(336),
    MobilityStateParameters(337),
    ModulationOrder(338),
    MRDC_AssistanceInfo(339),
    MRDC_Parameters(340),
    MRDC_SecondaryCellGroupConfig(341),
    MultiBandInfoListEUTRA(342),
    MultiFrequencyBandListNR(343),
    MultiFrequencyBandListNR_SIB(344),
    NAICS_Capability_Entry(345),
    NextHopChainingCount(346),
    NG_5G_S_TMSI(347),
    NRDC_Parameters(348),
    NR_FreqInfo(349),
    NR_MultiBandInfo(350),
    NR_NS_PmaxList(351),
    NR_NS_PmaxValue(352),
    NR_RS_Type(353),
    NumberOfCarriers(354),
    NZP_CSI_RS_Resource(355),
    NZP_CSI_RS_ResourceId(356),
    NZP_CSI_RS_ResourceSet(357),
    NZP_CSI_RS_ResourceSetId(358),
    OtherConfig(359),
    OtherConfig_v1540(360),
    OverheatingAssistanceConfig(361),
    OverheatingAssistance(362),
    P0_PUCCH(363),
    P0_PUCCH_Id(364),
    P0_PUSCH_AlphaSet(365),
    P0_PUSCH_AlphaSetId(366),
    PagingCycle(367),
    Paging(368),
    PagingRecord(369),
    PagingRecordList(370),
    PagingUE_Identity(371),
    PCCH_Config(372),
    PCCH_Message(373),
    PCCH_MessageType(374),
    PCI_List(375),
    PCI_RangeElement(376),
    PCI_Range(377),
    PCI_RangeIndex(378),
    PCI_RangeIndexList(379),
    PDCCH_BlindDetection(380),
    PDCCH_ConfigCommon(381),
    PDCCH_Config(382),
    PDCCH_ConfigSIB1(383),
    PDCCH_ServingCellConfig(384),
    PDCP_Config(385),
    PDCP_Parameters(386),
    PDCP_ParametersMRDC(387),
    PDSCH_CodeBlockGroupTransmission(388),
    PDSCH_ConfigCommon(389),
    PDSCH_Config(390),
    PDSCH_ServingCellConfig(391),
    PDSCH_TimeDomainResourceAllocation(392),
    PDSCH_TimeDomainResourceAllocationList(393),
    PDU_SessionID(394),
    PeriodicalReportConfig(395),
    PeriodicalReportConfigInterRAT(396),
    PeriodicRNAU_TimerValue(397),
    PH_InfoMCG(398),
    PH_InfoSCG(399),
    PHR_Config(400),
    PH_TypeListMCG(401),
    PH_TypeListSCG(402),
    PH_UplinkCarrierMCG(403),
    PH_UplinkCarrierSCG(404),
    Phy_ParametersCommon(405),
    Phy_ParametersFR1(406),
    Phy_ParametersFR2(407),
    Phy_ParametersFRX_Diff(408),
    Phy_Parameters(409),
    Phy_ParametersMRDC(410),
    Phy_ParametersXDD_Diff(411),
    PhysCellId(412),
    PhysicalCellGroupConfig(413),
    PLMN_Identity_EUTRA_5GC(414),
    PLMN_Identity(415),
    PLMN_IdentityInfo(416),
    PLMN_IdentityInfoList(417),
    PLMN_IdentityList_EUTRA_5GC(418),
    PLMN_IdentityList_EUTRA_EPC(419),
    PLMN_RAN_AreaCell(420),
    PLMN_RAN_AreaCellList(421),
    PLMN_RAN_AreaConfig(422),
    PLMN_RAN_AreaConfigList(423),
    P_Max(424),
    PollByte(425),
    PollPDU(426),
    PortIndex2(427),
    PortIndex4(428),
    PortIndex8(429),
    PortIndexFor8Ranks(430),
    PRACH_ResourceDedicatedBFR(431),
    PRB_Id(432),
    ProcessingParameters(433),
    PTRS_DensityRecommendationDL(434),
    PTRS_DensityRecommendationUL(435),
    PTRS_DownlinkConfig(436),
    PTRS_UplinkConfig(437),
    PUCCH_ConfigCommon(438),
    PUCCH_Config(439),
    PUCCH_CSI_Resource(440),
    PUCCH_format0(441),
    PUCCH_format1(442),
    PUCCH_format2(443),
    PUCCH_format3(444),
    PUCCH_format4(445),
    PUCCH_FormatConfig(446),
    PUCCH_MaxCodeRate(447),
    PUCCH_PathlossReferenceRS(448),
    PUCCH_PathlossReferenceRS_Id(449),
    PUCCH_PowerControl(450),
    PUCCH_Resource(451),
    PUCCH_ResourceId(452),
    PUCCH_ResourceSet(453),
    PUCCH_ResourceSetId(454),
    PUCCH_SpatialRelationInfo(455),
    PUCCH_SpatialRelationInfoId(456),
    PUCCH_TPC_CommandConfig(457),
    PUSCH_CodeBlockGroupTransmission(458),
    PUSCH_ConfigCommon(459),
    PUSCH_Config(460),
    PUSCH_PathlossReferenceRS(461),
    PUSCH_PathlossReferenceRS_Id(462),
    PUSCH_PowerControl(463),
    PUSCH_ServingCellConfig(464),
    PUSCH_TimeDomainResourceAllocation(465),
    PUSCH_TimeDomainResourceAllocationList(466),
    PUSCH_TPC_CommandConfig(467),
    QCL_Info(468),
    QFI(469),
    Q_OffsetRange(470),
    Q_OffsetRangeList(471),
    Q_QualMin(472),
    Q_RxLevMin(473),
    QuantityConfig(474),
    QuantityConfigNR(475),
    QuantityConfigRS(476),
    RACH_ConfigCommon(477),
    RACH_ConfigDedicated(478),
    RACH_ConfigGeneric(479),
    RadioBearerConfig(480),
    RadioLinkMonitoringConfig(481),
    RadioLinkMonitoringRS(482),
    RadioLinkMonitoringRS_Id(483),
    RAN_AreaCode(484),
    RAN_AreaConfig(485),
    RangeToBestCell(486),
    RAN_NotificationAreaInfo(487),
    RA_Prioritization(488),
    RateMatchPatternGroup(489),
    RateMatchPattern(490),
    RateMatchPatternId(491),
    RateMatchPatternLTE_CRS(492),
    RAT_Type(493),
    ReconfigurationWithSync(494),
    RedirectedCarrierInfo_EUTRA(495),
    RedirectedCarrierInfo(496),
    ReducedAggregatedBandwidth(497),
    ReestablishmentCause(498),
    ReestablishmentInfo(499),
    ReestabNCellInfo(500),
    ReestabNCellInfoList(501),
    ReestabUE_Identity(502),
    ReferenceSignalConfig(503),
    RegisteredAMF(504),
    RejectWaitTime(505),
    ReportCGI_EUTRA(506),
    ReportCGI(507),
    ReportConfigId(508),
    ReportConfigInterRAT(509),
    ReportConfigNR(510),
    ReportConfigToAddMod(511),
    ReportConfigToAddModList(512),
    ReportConfigToRemoveList(513),
    ReportInterval(514),
    ReportSFTD_EUTRA(515),
    ReportSFTD_NR(516),
    ReselectionThreshold(517),
    ReselectionThresholdQ(518),
    ResultsPerCSI_RS_Index(519),
    ResultsPerCSI_RS_IndexList(520),
    ResultsPerSSB_Index(521),
    ResultsPerSSB_IndexList(522),
    ResumeCause(523),
    RF_Parameters(524),
    RF_ParametersMRDC(525),
    RLC_BearerConfig(526),
    RLC_Config(527),
    RLC_Parameters(528),
    RLF_TimersAndConstants(529),
    RNTI_Value(530),
    RRCReconfigurationComplete(531),
    RRCReconfigurationComplete_IEs(532),
    RRCReconfigurationComplete_v1530_IEs(533),
    RRCReconfigurationComplete_v1560_IEs(534),
    RRCReconfiguration(535),
    RRCReconfiguration_IEs(536),
    RRCReconfiguration_v1530_IEs(537),
    RRCReconfiguration_v1540_IEs(538),
    RRCReconfiguration_v1560_IEs(539),
    RRCReestablishmentComplete(540),
    RRCReestablishmentComplete_IEs(541),
    RRCReestablishment(542),
    RRCReestablishment_IEs(543),
    RRCReestablishmentRequest(544),
    RRCReestablishmentRequest_IEs(545),
    RRCReject(546),
    RRCReject_IEs(547),
    RRCRelease(548),
    RRCRelease_IEs(549),
    RRCRelease_v1540_IEs(550),
    RRCResumeComplete(551),
    RRCResumeComplete_IEs(552),
    RRCResume(553),
    RRCResume_IEs(554),
    RRCResumeRequest1(555),
    RRCResumeRequest1_IEs(556),
    RRCResumeRequest(557),
    RRCResumeRequest_IEs(558),
    RRCResume_v1560_IEs(559),
    RRCSetupComplete(560),
    RRCSetupComplete_IEs(561),
    RRCSetup(562),
    RRCSetup_IEs(563),
    RRCSetupRequest(564),
    RRCSetupRequest_IEs(565),
    RRCSystemInfoRequest(566),
    RRCSystemInfoRequest_r15_IEs(567),
    RRC_TransactionIdentifier(568),
    RRM_Config(569),
    RSRP_RangeEUTRA(570),
    RSRP_Range(571),
    RSRQ_RangeEUTRA(572),
    RSRQ_Range(573),
    SCellConfig(574),
    SCellIndex(575),
    SCGFailureInformationEUTRA(576),
    SCGFailureInformationEUTRA_IEs(577),
    SCGFailureInformation(578),
    SCGFailureInformation_IEs(579),
    SchedulingInfo(580),
    SchedulingRequestConfig(581),
    SchedulingRequestId(582),
    SchedulingRequestResourceConfig(583),
    SchedulingRequestResourceId(584),
    SchedulingRequestToAddMod(585),
    ScramblingId(586),
    SCS_SpecificCarrier(587),
    SDAP_Config(588),
    SDAP_Parameters(589),
    SearchSpace(590),
    SearchSpaceId(591),
    SearchSpaceZero(592),
    SecurityAlgorithmConfig(593),
    SecurityConfig(594),
    SecurityConfigSMC(595),
    SecurityModeCommand(596),
    SecurityModeCommand_IEs(597),
    SecurityModeComplete(598),
    SecurityModeComplete_IEs(599),
    SecurityModeFailure(600),
    SecurityModeFailure_IEs(601),
    ServCellIndex(602),
    ServingCellConfigCommon(603),
    ServingCellConfigCommonSIB(604),
    ServingCellConfig(605),
    //SetupRelease(606),
    ShortI_RNTI_Value(607),
    ShortMAC_I(608),
    SIB1(609),
    SIB2(610),
    SIB3(611),
    SIB4(612),
    SIB5(613),
    SIB6(614),
    SIB7(615),
    SIB8(616),
    SIB9(617),
    SIB_Mapping(618),
    SIB_TypeInfo(619),
    SINR_RangeEUTRA(620),
    SINR_Range(621),
    SI_RequestConfig(622),
    SI_RequestResources(623),
    SI_SchedulingInfo(624),
    SK_Counter(625),
    SlotFormatCombination(626),
    SlotFormatCombinationId(627),
    SlotFormatCombinationsPerCell(628),
    SlotFormatIndicator(629),
    SN_FieldLengthAM(630),
    SN_FieldLengthUM(631),
    S_NSSAI(632),
    SpatialRelations(633),
    SpCellConfig(634),
    SpeedStateScaleFactors(635),
    SPS_Config(636),
    SRB_Identity(637),
    SRB_ToAddMod(638),
    SRB_ToAddModList(639),
    SRI_PUSCH_PowerControl(640),
    SRI_PUSCH_PowerControlId(641),
    SRS_CarrierSwitching(642),
    SRS_CC_SetIndex(643),
    SRS_Config(644),
    SRS_PeriodicityAndOffset(645),
    SRS_Resource(646),
    SRS_ResourceId(647),
    SRS_ResourceSet(648),
    SRS_ResourceSetId(649),
    SRS_Resources(650),
    SRS_SpatialRelationInfo(651),
    SRS_SwitchingTimeEUTRA(652),
    SRS_SwitchingTimeNR(653),
    SRS_TPC_CommandConfig(654),
    SRS_TPC_PDCCH_Config(655),
    SSB_ConfigMobility(656),
    SSB_Index(657),
    SSB_MTC2(658),
    SSB_MTC(659),
    SSB_ToMeasure(660),
    SS_RSSI_Measurement(661),
    SubcarrierSpacing(662),
    SupportedBandwidth(663),
    SupportedCSI_RS_Resource(664),
    SuspendConfig(665),
    SystemInformation(666),
    SystemInformation_IEs(667),
    TAG_Config(668),
    TAG(669),
    TAG_Id(670),
    TCI_State(671),
    TCI_StateId(672),
    TDD_UL_DL_ConfigCommon(673),
    TDD_UL_DL_ConfigDedicated(674),
    TDD_UL_DL_Pattern(675),
    TDD_UL_DL_SlotConfig(676),
    TDD_UL_DL_SlotIndex(677),
    ThresholdNR(678),
    TimeAlignmentTimer(679),
    TimeToTrigger(680),
    T_PollRetransmit(681),
    TrackingAreaCode(682),
    T_Reassembly(683),
    T_Reselection(684),
    T_StatusProhibit(685),
    UAC_AccessCategory1_SelectionAssistanceInfo(686),
    UAC_BarringInfoSet(687),
    UAC_BarringInfoSetIndex(688),
    UAC_BarringInfoSetList(689),
    UAC_BarringPerCat(690),
    UAC_BarringPerCatList(691),
    UAC_BarringPerPLMN(692),
    UAC_BarringPerPLMN_List(693),
    UCI_OnPUSCH(694),
    UEAssistanceInformation(695),
    UEAssistanceInformation_IEs(696),
    UEAssistanceInformation_v1540_IEs(697),
    UECapabilityEnquiry(698),
    UECapabilityEnquiry_IEs(699),
    UECapabilityEnquiry_v1560_IEs(700),
    UECapabilityInformation(701),
    UECapabilityInformation_IEs(702),
    UE_CapabilityRAT_Container(703),
    UE_CapabilityRAT_ContainerList(704),
    UE_CapabilityRAT_Request(705),
    UE_CapabilityRAT_RequestList(706),
    UE_CapabilityRequestFilterCommon(707),
    UE_CapabilityRequestFilterNR(708),
    UE_CapabilityRequestFilterNR_v1540(709),
    UE_MRDC_CapabilityAddFRX_Mode(710),
    UE_MRDC_CapabilityAddXDD_Mode(711),
    UE_MRDC_CapabilityAddXDD_Mode_v1560(712),
    UE_MRDC_Capability(713),
    UE_MRDC_Capability_v1560(714),
    UE_NR_CapabilityAddFRX_Mode(715),
    UE_NR_CapabilityAddFRX_Mode_v1540(716),
    UE_NR_CapabilityAddXDD_Mode(717),
    UE_NR_CapabilityAddXDD_Mode_v1530(718),
    UE_NR_Capability(719),
    UE_NR_Capability_v1530(720),
    UE_NR_Capability_v1540(721),
    UE_NR_Capability_v1550(722),
    UE_NR_Capability_v1560(723),
    UERadioAccessCapabilityInformation(724),
    UERadioAccessCapabilityInformation_IEs(725),
    UERadioPagingInformation(726),
    UERadioPagingInformation_IEs(727),
    UE_TimersAndConstants(728),
    UL_AM_RLC(729),
    UL_CCCH1_Message(730),
    UL_CCCH1_MessageType(731),
    UL_CCCH_Message(732),
    UL_CCCH_MessageType(733),
    UL_DataSplitThreshold(734),
    UL_DCCH_Message(735),
    UL_DCCH_MessageType(736),
    ULInformationTransfer(737),
    ULInformationTransfer_IEs(738),
    ULInformationTransferMRDC(739),
    ULInformationTransferMRDC_IEs(740),
    UL_UM_RLC(741),
    UplinkConfigCommon(742),
    UplinkConfigCommonSIB(743),
    UplinkConfig(744),
    UplinkTxDirectCurrentBWP(745),
    UplinkTxDirectCurrentCell(746),
    UplinkTxDirectCurrentList(747),
    VarMeasConfig(748),
    VarMeasReport(749),
    VarMeasReportList(750),
    VarPendingRNA_Update(751),
    VarResumeMAC_Input(752),
    VarShortMAC_Input(753),
    VictimSystemType(754),
    ZP_CSI_RS_Resource(755),
    ZP_CSI_RS_ResourceId(756),
    ZP_CSI_RS_ResourceSet(757),
    ZP_CSI_RS_ResourceSetId(758);

    public final int value;

    RrcDataUnitType(int value) {
        this.value = value;
    }
}
