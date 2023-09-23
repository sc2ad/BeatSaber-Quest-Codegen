#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidViewAvatar_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidViewAvatar_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOffsetPositionByLocalPlayerPosition_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerResultsPyramidView.get_resultAvatarDirectors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::GameObject> (GlobalNamespace::MultiplayerResultsPyramidView::*)()>(&GlobalNamespace::MultiplayerResultsPyramidView::get_resultAvatarDirectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2100f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsPyramidView>::get(),
                            "get_resultAvatarDirectors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerResultsPyramidView.get_badgeTimelines
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::GameObject> (GlobalNamespace::MultiplayerResultsPyramidView::*)()>(&GlobalNamespace::MultiplayerResultsPyramidView::get_badgeTimelines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2100f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsPyramidView>::get(),
                            "get_badgeTimelines",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerResultsPyramidView.PrespawnAvatars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidView::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer>)>(&GlobalNamespace::MultiplayerResultsPyramidView::PrespawnAvatars)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x20fefc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsPyramidView>::get(),
                            "PrespawnAvatars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerResultsPyramidView.SetupResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidView::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData>, UnityEngine::Transform, UnityEngine::Transform)>(&GlobalNamespace::MultiplayerResultsPyramidView::SetupResults)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x20fe17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsPyramidView>::get(),
                            "SetupResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerResultsPyramidView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidView::*)()>(&GlobalNamespace::MultiplayerResultsPyramidView::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21013c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsPyramidView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__multiplayerOffsetByLocalPlayerPosition(GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>(value));
}
constexpr GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition GlobalNamespace::MultiplayerResultsPyramidView::__get__multiplayerOffsetByLocalPlayerPosition() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__spawnPoints(::ArrayW<UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Transform>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<UnityEngine::Transform> GlobalNamespace::MultiplayerResultsPyramidView::__get__spawnPoints() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Transform>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__spawnPointsParent(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::MultiplayerResultsPyramidView::__get__spawnPointsParent() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__evenCountOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerResultsPyramidView::__get__evenCountOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__avatarsFactory(GlobalNamespace::GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory GlobalNamespace::MultiplayerResultsPyramidView::__get__avatarsFactory() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__avatarsDictionary(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerResultsPyramidViewAvatar> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerResultsPyramidViewAvatar>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerResultsPyramidViewAvatar>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerResultsPyramidViewAvatar> GlobalNamespace::MultiplayerResultsPyramidView::__get__avatarsDictionary() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerResultsPyramidViewAvatar>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__resultAvatarDirectors(::ArrayW<UnityEngine::GameObject> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::GameObject>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::GameObject>>(value));
}
constexpr ::ArrayW<UnityEngine::GameObject> GlobalNamespace::MultiplayerResultsPyramidView::__get__resultAvatarDirectors() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::GameObject>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__badgeTimelines(::ArrayW<UnityEngine::GameObject> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::GameObject>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::GameObject>>(value));
}
constexpr ::ArrayW<UnityEngine::GameObject> GlobalNamespace::MultiplayerResultsPyramidView::__get__badgeTimelines() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::GameObject>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__anyResultsAvatar(GlobalNamespace::MultiplayerResultsPyramidViewAvatar value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerResultsPyramidViewAvatar, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerResultsPyramidViewAvatar>(value));
}
constexpr GlobalNamespace::MultiplayerResultsPyramidViewAvatar GlobalNamespace::MultiplayerResultsPyramidView::__get__anyResultsAvatar() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerResultsPyramidViewAvatar, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<UnityEngine::GameObject> GlobalNamespace::MultiplayerResultsPyramidView::get_resultAvatarDirectors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsPyramidView>::get(),
                            "get_resultAvatarDirectors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::GameObject>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<UnityEngine::GameObject> GlobalNamespace::MultiplayerResultsPyramidView::get_badgeTimelines()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsPyramidView>::get(),
                            "get_badgeTimelines",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::GameObject>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerResultsPyramidView::PrespawnAvatars(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> activePlayers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsPyramidView>::get(),
                            "PrespawnAvatars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, activePlayers);
}
 void GlobalNamespace::MultiplayerResultsPyramidView::SetupResults(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> resultsData, UnityEngine::Transform badgeStartTransform, UnityEngine::Transform badgeMidTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsPyramidView>::get(),
                            "SetupResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, resultsData, badgeStartTransform, badgeMidTransform);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerResultsPyramidView::MultiplayerResultsPyramidView()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerResultsPyramidView>())) {}
 void GlobalNamespace::MultiplayerResultsPyramidView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsPyramidView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
