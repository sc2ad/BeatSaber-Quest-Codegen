#pragma once
#include "HMUI/zzzz__NavigationController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__LevelCollectionNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__LevelPackDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__IAnnotatedBeatmapLevelCollection_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailViewController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType  ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType::In{0};
constexpr ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType  ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType::Out{1};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0::*)()>(&::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2165f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0._PresentDetailViewController_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0::*)()>(&::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0::_PresentDetailViewController_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21660bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0>::get(),
                            "<PresentDetailViewController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0::__set___4__this(::GlobalNamespace::LevelCollectionNavigationController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelCollectionNavigationController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LevelCollectionNavigationController>(value));
}
constexpr ::GlobalNamespace::LevelCollectionNavigationController ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCollectionNavigationController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0::__set_viewController(::HMUI::ViewController value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ViewController>(value));
}
constexpr ::HMUI::ViewController ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0::__get_viewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0::_PresentDetailViewController_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0>::get(),
                            "<PresentDetailViewController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didChangeLevelDetailContentEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>)>(&::GlobalNamespace::LevelCollectionNavigationController::add_didChangeLevelDetailContentEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2162d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didChangeLevelDetailContentEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didChangeLevelDetailContentEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>)>(&::GlobalNamespace::LevelCollectionNavigationController::remove_didChangeLevelDetailContentEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2162dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didChangeLevelDetailContentEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didSelectLevelPackEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>)>(&::GlobalNamespace::LevelCollectionNavigationController::add_didSelectLevelPackEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2162e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didSelectLevelPackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didSelectLevelPackEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>)>(&::GlobalNamespace::LevelCollectionNavigationController::remove_didSelectLevelPackEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2162f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didSelectLevelPackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didPressActionButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController>)>(&::GlobalNamespace::LevelCollectionNavigationController::add_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2162fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didPressActionButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didPressActionButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController>)>(&::GlobalNamespace::LevelCollectionNavigationController::remove_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2163094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didPressActionButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didPressOpenPackButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>)>(&::GlobalNamespace::LevelCollectionNavigationController::add_didPressOpenPackButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2163144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didPressOpenPackButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didPressOpenPackButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>)>(&::GlobalNamespace::LevelCollectionNavigationController::remove_didPressOpenPackButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21631f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didPressOpenPackButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didPressPracticeButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel>)>(&::GlobalNamespace::LevelCollectionNavigationController::add_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21632a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didPressPracticeButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didPressPracticeButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel>)>(&::GlobalNamespace::LevelCollectionNavigationController::remove_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2163354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didPressPracticeButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didChangeDifficultyBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap>)>(&::GlobalNamespace::LevelCollectionNavigationController::add_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2163404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didChangeDifficultyBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap>)>(&::GlobalNamespace::LevelCollectionNavigationController::remove_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21634b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.get_selectedDifficultyBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap (::GlobalNamespace::LevelCollectionNavigationController::*)()>(&::GlobalNamespace::LevelCollectionNavigationController::get_selectedDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2163564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "get_selectedDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.get_selectedBeatmapLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPreviewBeatmapLevel (::GlobalNamespace::LevelCollectionNavigationController::*)()>(&::GlobalNamespace::LevelCollectionNavigationController::get_selectedBeatmapLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21635a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "get_selectedBeatmapLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::IAnnotatedBeatmapLevelCollection, bool, bool, ::StringW, ::UnityEngine::GameObject, ::GlobalNamespace::BeatmapDifficultyMask, ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>)>(&::GlobalNamespace::LevelCollectionNavigationController::SetData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x21635c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.SelectLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::IPreviewBeatmapLevel)>(&::GlobalNamespace::LevelCollectionNavigationController::SelectLevel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x216397c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "SelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.AnimateCanvasGroupAlpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType)>(&::GlobalNamespace::LevelCollectionNavigationController::AnimateCanvasGroupAlpha)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x21639e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "AnimateCanvasGroupAlpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(bool, bool, bool)>(&::GlobalNamespace::LevelCollectionNavigationController::DidActivate)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x2163bd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::LevelCollectionNavigationController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(bool, bool)>(&::GlobalNamespace::LevelCollectionNavigationController::DidDeactivate)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x21645f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::LevelCollectionNavigationController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.SetDataForPack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::IBeatmapLevelPack, bool, bool, ::StringW)>(&::GlobalNamespace::LevelCollectionNavigationController::SetDataForPack)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2163750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "SetDataForPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.SetDataForLevelCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::IBeatmapLevelCollection, bool, ::StringW, ::UnityEngine::GameObject)>(&::GlobalNamespace::LevelCollectionNavigationController::SetDataForLevelCollection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x216393c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "SetDataForLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.RefreshDetail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(&::GlobalNamespace::LevelCollectionNavigationController::RefreshDetail)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21656e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "RefreshDetail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.ClearSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(&::GlobalNamespace::LevelCollectionNavigationController::ClearSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2165724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "ClearSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.ShowLoading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(&::GlobalNamespace::LevelCollectionNavigationController::ShowLoading)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2165764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "ShowLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.PresentViewControllersForPack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(&::GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForPack)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x216560c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "PresentViewControllersForPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.PresentViewControllersForLevelCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(&::GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForLevelCollection)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2165684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "PresentViewControllersForLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HideLoading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(&::GlobalNamespace::LevelCollectionNavigationController::HideLoading)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2165840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HideLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HideDetailViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(&::GlobalNamespace::LevelCollectionNavigationController::HideDetailViewController)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2165a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HideDetailViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelCollectionViewControllerDidSelectLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::LevelCollectionViewController, ::GlobalNamespace::IPreviewBeatmapLevel)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectLevel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2165a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelCollectionViewControllerDidSelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelCollectionViewControllerDidSelectPack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::LevelCollectionViewController)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectPack)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2165eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelCollectionViewControllerDidSelectPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.PresentDetailViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::HMUI::ViewController, bool)>(&::GlobalNamespace::LevelCollectionNavigationController::PresentDetailViewController)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2165864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "PresentDetailViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPressActionButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::StandardLevelDetailViewController)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressActionButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2165f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerDidPressActionButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPressPracticeButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::StandardLevelDetailViewController, ::GlobalNamespace::IBeatmapLevel)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressPracticeButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2165f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerDidPressPracticeButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidChangeDifficultyBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::StandardLevelDetailViewController, ::GlobalNamespace::IDifficultyBeatmap)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidChangeDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2165f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerDidChangeDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPresentContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::StandardLevelDetailViewController, ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPresentContent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2165f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerDidPresentContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPressOpenLevelPackButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::StandardLevelDetailViewController, ::GlobalNamespace::IBeatmapLevelPack)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressOpenLevelPackButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2165f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerDidPressOpenLevelPackButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerLevelFavoriteStatusDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::StandardLevelDetailViewController, bool)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerLevelFavoriteStatusDidChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2165fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerLevelFavoriteStatusDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(&::GlobalNamespace::LevelCollectionNavigationController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2165ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController._AnimateCanvasGroupAlpha_b__40_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(float_t)>(&::GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__40_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2166004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "<AnimateCanvasGroupAlpha>b__40_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController._AnimateCanvasGroupAlpha_b__40_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(&::GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__40_1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2166034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "<AnimateCanvasGroupAlpha>b__40_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__loadingControl(::GlobalNamespace::LoadingControl value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LoadingControl, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LoadingControl>(value));
}
constexpr ::GlobalNamespace::LoadingControl ::GlobalNamespace::LevelCollectionNavigationController::__get__loadingControl() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LoadingControl, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__levelCollectionViewController(::GlobalNamespace::LevelCollectionViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelCollectionViewController, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LevelCollectionViewController>(value));
}
constexpr ::GlobalNamespace::LevelCollectionViewController ::GlobalNamespace::LevelCollectionNavigationController::__get__levelCollectionViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCollectionViewController, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__levelPackDetailViewController(::GlobalNamespace::LevelPackDetailViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelPackDetailViewController, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LevelPackDetailViewController>(value));
}
constexpr ::GlobalNamespace::LevelPackDetailViewController ::GlobalNamespace::LevelCollectionNavigationController::__get__levelPackDetailViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelPackDetailViewController, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__levelDetailViewController(::GlobalNamespace::StandardLevelDetailViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::StandardLevelDetailViewController>(value));
}
constexpr ::GlobalNamespace::StandardLevelDetailViewController ::GlobalNamespace::LevelCollectionNavigationController::__get__levelDetailViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelDetailViewController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppStaticSettingsSO, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AppStaticSettingsSO>(value));
}
constexpr ::GlobalNamespace::AppStaticSettingsSO ::GlobalNamespace::LevelCollectionNavigationController::__get__appStaticSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppStaticSettingsSO, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__timeTweeningManager(::Tweening::TimeTweeningManager value)  {
::cordl_internals::setInstanceField<::Tweening::TimeTweeningManager, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Tweening::TimeTweeningManager>(value));
}
constexpr ::Tweening::TimeTweeningManager ::GlobalNamespace::LevelCollectionNavigationController::__get__timeTweeningManager() const {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set_didChangeLevelDetailContentEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType> ::GlobalNamespace::LevelCollectionNavigationController::__get_didChangeLevelDetailContentEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack> ::GlobalNamespace::LevelCollectionNavigationController::__get_didSelectLevelPackEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController> ::GlobalNamespace::LevelCollectionNavigationController::__get_didPressActionButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set_didPressOpenPackButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack> ::GlobalNamespace::LevelCollectionNavigationController::__get_didPressOpenPackButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel>, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel> ::GlobalNamespace::LevelCollectionNavigationController::__get_didPressPracticeButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel>, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap>, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap> ::GlobalNamespace::LevelCollectionNavigationController::__get_didChangeDifficultyBeatmapEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap>, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__showPracticeButtonInDetailView(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::LevelCollectionNavigationController::__get__showPracticeButtonInDetailView() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__actionButtonTextInDetailView(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::LevelCollectionNavigationController::__get__actionButtonTextInDetailView() const {
return ::cordl_internals::getInstanceField<::StringW, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__levelPack(::GlobalNamespace::IBeatmapLevelPack value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelPack, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatmapLevelPack>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack ::GlobalNamespace::LevelCollectionNavigationController::__get__levelPack() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPack, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDifficultyMask>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask ::GlobalNamespace::LevelCollectionNavigationController::__get__allowedBeatmapDifficultyMask() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__beatmapLevelToBeSelectedAfterPresent(::GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::LevelCollectionNavigationController::__get__beatmapLevelToBeSelectedAfterPresent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__loading(bool value)  {
::cordl_internals::setInstanceField<bool, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::LevelCollectionNavigationController::__get__loading() const {
return ::cordl_internals::getInstanceField<bool, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__hideDetailViewController(bool value)  {
::cordl_internals::setInstanceField<bool, 0x121>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::LevelCollectionNavigationController::__get__hideDetailViewController() const {
return ::cordl_internals::getInstanceField<bool, 0x121>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__notAllowedCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO> ::GlobalNamespace::LevelCollectionNavigationController::__get__notAllowedCharacteristics() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelCollectionNavigationController::__set__floatTween(::Tweening::FloatTween value)  {
::cordl_internals::setInstanceField<::Tweening::FloatTween, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Tweening::FloatTween>(value));
}
constexpr ::Tweening::FloatTween ::GlobalNamespace::LevelCollectionNavigationController::__get__floatTween() const {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::add_didChangeLevelDetailContentEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didChangeLevelDetailContentEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::remove_didChangeLevelDetailContentEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didChangeLevelDetailContentEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::add_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didSelectLevelPackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::remove_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didSelectLevelPackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::add_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didPressActionButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::remove_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didPressActionButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::add_didPressOpenPackButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didPressOpenPackButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::remove_didPressOpenPackButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didPressOpenPackButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::add_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didPressPracticeButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::remove_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didPressPracticeButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IBeatmapLevel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::add_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "add_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::remove_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "remove_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController,::GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::IDifficultyBeatmap ::GlobalNamespace::LevelCollectionNavigationController::get_selectedDifficultyBeatmap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "get_selectedDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmap, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::LevelCollectionNavigationController::get_selectedBeatmapLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "get_selectedBeatmapLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPreviewBeatmapLevel, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::SetData(::GlobalNamespace::IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, bool showPackHeader, bool showPracticeButton, ::StringW actionButtonText, ::UnityEngine::GameObject noDataInfoPrefab, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO> notAllowedCharacteristics)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, annotatedBeatmapLevelCollection, showPackHeader, showPracticeButton, actionButtonText, noDataInfoPrefab, allowedBeatmapDifficultyMask, notAllowedCharacteristics);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::SelectLevel(::GlobalNamespace::IPreviewBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "SelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::AnimateCanvasGroupAlpha(::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "AnimateCanvasGroupAlpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, animationType);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::SetDataForPack(::GlobalNamespace::IBeatmapLevelPack levelPack, bool showPackHeader, bool showPracticeButton, ::StringW actionButtonText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "SetDataForPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelPack, showPackHeader, showPracticeButton, actionButtonText);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::SetDataForLevelCollection(::GlobalNamespace::IBeatmapLevelCollection beatmapLevelCollection, bool showPracticeButton, ::StringW actionButtonText, ::UnityEngine::GameObject noDataInfoPrefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "SetDataForLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelCollection, showPracticeButton, actionButtonText, noDataInfoPrefab);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::RefreshDetail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "RefreshDetail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::ClearSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "ClearSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::ShowLoading()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "ShowLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForPack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "PresentViewControllersForPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForLevelCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "PresentViewControllersForLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::HideLoading()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HideLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::HideDetailViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HideDetailViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectLevel(::GlobalNamespace::LevelCollectionViewController viewController, ::GlobalNamespace::IPreviewBeatmapLevel level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelCollectionViewControllerDidSelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, level);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectPack(::GlobalNamespace::LevelCollectionViewController viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelCollectionViewControllerDidSelectPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::PresentDetailViewController(::HMUI::ViewController viewController, bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "PresentDetailViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, immediately);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressActionButton(::GlobalNamespace::StandardLevelDetailViewController viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerDidPressActionButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressPracticeButton(::GlobalNamespace::StandardLevelDetailViewController viewController, ::GlobalNamespace::IBeatmapLevel level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerDidPressPracticeButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, level);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailViewController viewController, ::GlobalNamespace::IDifficultyBeatmap beatmap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerDidChangeDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, beatmap);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPresentContent(::GlobalNamespace::StandardLevelDetailViewController viewController, ::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType contentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerDidPresentContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__StandardLevelDetailViewController__ContentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, contentType);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressOpenLevelPackButton(::GlobalNamespace::StandardLevelDetailViewController viewController, ::GlobalNamespace::IBeatmapLevelPack levelPack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerDidPressOpenLevelPackButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, levelPack);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerLevelFavoriteStatusDidChange(::GlobalNamespace::StandardLevelDetailViewController viewController, bool favoriteStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "HandleLevelDetailViewControllerLevelFavoriteStatusDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, favoriteStatus);
}
// Ctor Parameters []
 ::GlobalNamespace::LevelCollectionNavigationController::LevelCollectionNavigationController()  : ::HMUI::NavigationController(THROW_UNLESS(::il2cpp_utils::New<LevelCollectionNavigationController>())) {}
 void ::GlobalNamespace::LevelCollectionNavigationController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__40_0(float_t f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "<AnimateCanvasGroupAlpha>b__40_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, f);
}
 void ::GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__40_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController>::get(),
                            "<AnimateCanvasGroupAlpha>b__40_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
