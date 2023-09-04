BEGIN_CLS(Resource)
P_RO(SourceFile)
P_RO(PackageName)
P_RO(ModName)
P_RO(Guid)
P_RO(Tags)
P_RO(Name)
P_RO(IsLocalized)
P_RO(IsActive)
P_RO(IsDirty)
P_RO(IsOriginal)
END_CLS()


BEGIN_CLS(resource::GuidResource)
P_RO(ResourceUUID)
END_CLS()


BEGIN_CLS(resource::Action)
INHERIT(resource::GuidResource)
P(Name)
P(DisplayName)
P(Description)
P(Error)
P(MaxLevel)
P(MaxValue)
P(DiceType)
P(ReplenishType)
P(ShowOnActionResourcePanel)
P(UpdatesSpellPowerLevel)
P(PartyActionResource)
P(IsSpellResource)
END_CLS()


BEGIN_CLS(resource::ClassDescription)
INHERIT(resource::GuidResource)
P(ParentGuid)
P(Name)
P(DisplayName)
P(SubclassTitle)
P(Description)
P(ProgressionTableUUID)
P(SoundClassType)
P(PrimaryAbility)
P(SpellCastingAbility)
P(MustPrepareSpells)
P(CanLearnSpells)
P(HasGod)
P(IsDefaultForUseSpellAction)
P(IsSomaticWithInstrument)
P_REF(Tags)
P(ClassEquipment)
P(CharacterCreationPose)
P(LearningStrategy)
P(BaseHp)
P(HpPerLevel)
P(CommonHotbarColumns)
P(ClassHotbarColumns)
P(ItemsHotbarColumns)
P(AnimationSetPriority)
P(MulticlassSpellcasterModifier)
P(SpellList)
END_CLS()


BEGIN_CLS(resource::Tag)
INHERIT(resource::GuidResource)
P(Name)
P(Description)
P(Icon)
P(Categories)
P(DisplayName)
P(DisplayDescription)
END_CLS()


BEGIN_CLS(resource::Faction)
INHERIT(resource::GuidResource)
P(Faction)
P(ParentGuid)
END_CLS()


BEGIN_CLS(resource::Race)
INHERIT(resource::GuidResource)
P(Name)
P(DisplayName)
P(Description)
P(ParentGuid)
P(Tags)
P(ProgressionTableUUID)
P(RaceSoundSwitch)
P(HairColors)
P(SkinColors)
P(EyeColors)
P(TattooColors)
P(MakeupColors)
P(Visuals)
P(Gods)
P(ExcludedGods)
END_CLS()


BEGIN_CLS(resource::Origin)
INHERIT(resource::GuidResource)
P(AvailableInCharacterCreation)
P(Name)
P(DisplayName)
P(Description)
P(Gender)
P(RaceUUID)
P(SubRaceUUID)
P(BackgroundUUID)
P(GodUUID)
P(ClassUUID)
P(SubClassUUID)
P(LockClass)
P(GlobalTemplate)
P(Passives)
P(Tags)
P(Flags)
P(Overview)
P(CloseUpA)
P(CloseUpB)
P(ClassEquipmentOverride)
P(VoiceTableUUID)
END_CLS()


BEGIN_CLS(resource::Background)
INHERIT(resource::GuidResource)
P(DisplayName)
P(Description)
P(Passives)
P(Tags)
END_CLS()


BEGIN_CLS(resource::God)
INHERIT(resource::GuidResource)
P(Name)
P(DisplayName)
P(Description)
P(Tags)
END_CLS()


BEGIN_CLS(resource::Progression)
INHERIT(resource::GuidResource)
P(TableUUID)
P(Name)
P(SubClasses)
P(PassivesAdded)
P(PassivesRemoved)
P(Boosts)
P(ProgressionType)
P(Level)
P(AllowImprovement)
P(SelectAbilities)
P(SelectSkills)
P(SelectSpells)
P(SelectPassives)
P(AddSpells)
END_CLS()


BEGIN_CLS(resource::ProgressionDescription)
INHERIT(resource::GuidResource)
P(DisplayName)
P(Description)
P(Hidden)
P(ExactMatch)
P(Type)
P(ParamMatch)
P(ProgressionId)
P(ProgressionTableId)
P(SelectorId)
P(PassivePrototype)
END_CLS()


BEGIN_CLS(resource::Gossip)
INHERIT(resource::GuidResource)
P(Name)
P(Type)
P(Priority)
P(ConditionFlags)
P(ResultFlags)
P(DialogUUID)
END_CLS()


BEGIN_CLS(resource::ActionResourceGroup)
INHERIT(resource::GuidResource)
P(Name)
P(field_38)
P(field_48)
P(ActionResourceDefinitions)
END_CLS()


BEGIN_CLS(resource::Color)
INHERIT(resource::GuidResource)
P(Name)
P(DisplayName)
P(Color)
END_CLS()


BEGIN_CLS(resource::EquipmentType)
INHERIT(resource::GuidResource)
P(Name)
P(WeaponType_OneHanded)
P(WeaponType_TwoHanded)
P(BoneMainSheathed)
P(BoneMainUnsheathed)
P(BoneOffHandSheathed)
P(BoneOffHandUnsheathed)
P(BoneVersatileSheathed)
P(BoneVersatileUnsheathed)
P(SourceBoneSheathed)
P(SourceBoneVersatileSheathed)
P(SourceBoneVersatileUnsheathed)
P(SoundAttackType)
P(SoundEquipmentType)
END_CLS()


BEGIN_CLS(resource::Flag)
INHERIT(resource::GuidResource)
P(Name)
P(Description)
P(Usage)
END_CLS()


BEGIN_CLS(resource::Feat)
INHERIT(resource::GuidResource)
P(Name)
P(Requirements)
P(PassivesAdded)
P(PassivesRemoved)
P(Boosts)
P(CanBeTakenMultipleTimes)
P(SelectAbilities)
P(SelectSkills)
P(SelectSpells)
P(SelectPassives)
P(AddSpells)
END_CLS()


BEGIN_CLS(resource::FeatDescription)
INHERIT(resource::GuidResource)
P(DisplayName)
P(Description)
P(Hidden)
P(ExactMatch)
P(Type)
P(ParamMatch)
P(FeatId)
P(SelectorId)
P(PassivePrototype)
END_CLS()
