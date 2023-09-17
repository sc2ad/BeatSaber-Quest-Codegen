#pragma once
#include "GlobalNamespace/zzzz__BaseResultsEnvironmentController_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BtsResultsEnvironmentController_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterDataModel_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterResultAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::*)()>(&::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20aa7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation.Clean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::*)()>(&::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::Clean)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x20aa658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>::get(),
                            "Clean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation.SetCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::*)(::UnityEngine::AddressableAssets::AssetReference, ::GlobalNamespace::BTSCharacter, bool)>(&::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::SetCharacter)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x20aa200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>::get(),
                            "SetCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AssetReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BTSCharacter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::*)()>(&::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20aa7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__set__name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__set__placeTransform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__get__placeTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__set__animationController(::GlobalNamespace::BTSCharacterResultAnimationController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BTSCharacterResultAnimationController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BTSCharacterResultAnimationController>(value));
}
constexpr ::GlobalNamespace::BTSCharacterResultAnimationController ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__get__animationController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BTSCharacterResultAnimationController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__set__animationClip(::UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationClip>(value));
}
constexpr ::UnityEngine::AnimationClip ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__get__animationClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__set__btsCharacter(::GlobalNamespace::BTSCharacter value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BTSCharacter, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BTSCharacter>(value));
}
constexpr ::GlobalNamespace::BTSCharacter ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__get__btsCharacter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BTSCharacter, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__set__btsCharacterAssetReference(::UnityEngine::AddressableAssets::AssetReference value)  {
::cordl_internals::setInstanceField<::UnityEngine::AddressableAssets::AssetReference, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AddressableAssets::AssetReference>(value));
}
constexpr ::UnityEngine::AddressableAssets::AssetReference ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__get__btsCharacterAssetReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AddressableAssets::AssetReference, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::Clean()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>::get(),
                            "Clean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::SetCharacter(::UnityEngine::AddressableAssets::AssetReference assetReference, ::GlobalNamespace::BTSCharacter btsCharacter, bool alternativeMaterial)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>::get(),
                            "SetCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AssetReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BTSCharacter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetReference, btsCharacter, alternativeMaterial);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>())) {}
 void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20aa630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)()>(&::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20aa7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)()>(&::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::MoveNext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x20aa7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)()>(&::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20aa894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)()>(&::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x20aa89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)()>(&::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20aa8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::operator ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__set___4__this(::GlobalNamespace::BtsResultsEnvironmentController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BtsResultsEnvironmentController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BtsResultsEnvironmentController>(value));
}
constexpr ::GlobalNamespace::BtsResultsEnvironmentController ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BtsResultsEnvironmentController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>(__1__state))) {}
 void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)(::GlobalNamespace::IReadonlyBeatmapData)>(&::GlobalNamespace::BtsResultsEnvironmentController::Setup)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x20a9acc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BtsResultsEnvironmentController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.SpawnBtsCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)(::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId, bool)>(&::GlobalNamespace::BtsResultsEnvironmentController::SpawnBtsCharacters)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x20a9fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                            "SpawnBtsCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)(bool)>(&::GlobalNamespace::BtsResultsEnvironmentController::Activate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x20aa2cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BtsResultsEnvironmentController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.Deactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)(bool)>(&::GlobalNamespace::BtsResultsEnvironmentController::Deactivate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x20aa374;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BtsResultsEnvironmentController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.DestroyCharactersDelayed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::BtsResultsEnvironmentController::*)()>(&::GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersDelayed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20aa5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                            "DestroyCharactersDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.DestroyCharactersAndStopAnimations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)()>(&::GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersAndStopAnimations)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20aa544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                            "DestroyCharactersAndStopAnimations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)()>(&::GlobalNamespace::BtsResultsEnvironmentController::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x20aa744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BtsResultsEnvironmentController::__set__btsCharacterAnimationWrapper(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::BtsResultsEnvironmentController::__get__btsCharacterAnimationWrapper() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BtsResultsEnvironmentController::__set__btsCharacterDataModel(::GlobalNamespace::BTSCharacterDataModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BTSCharacterDataModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BTSCharacterDataModel>(value));
}
constexpr ::GlobalNamespace::BTSCharacterDataModel ::GlobalNamespace::BtsResultsEnvironmentController::__get__btsCharacterDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BTSCharacterDataModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BtsResultsEnvironmentController::__set__btsCharactersResultsAppearPlayableDirector(::UnityEngine::Playables::PlayableDirector value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableDirector, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Playables::PlayableDirector>(value));
}
constexpr ::UnityEngine::Playables::PlayableDirector ::GlobalNamespace::BtsResultsEnvironmentController::__get__btsCharactersResultsAppearPlayableDirector() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableDirector, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BtsResultsEnvironmentController::__set__resultPlacesWithAnimations(::ArrayW<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation> ::GlobalNamespace::BtsResultsEnvironmentController::__get__resultPlacesWithAnimations() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType  ::GlobalNamespace::BtsResultsEnvironmentController::kCharacterDisplayEventType{40};
constexpr void ::GlobalNamespace::BtsResultsEnvironmentController::__set__handles(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> ::GlobalNamespace::BtsResultsEnvironmentController::__get__handles() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::BtsResultsEnvironmentController::Setup(::GlobalNamespace::IReadonlyBeatmapData beatmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapData);
}
 void ::GlobalNamespace::BtsResultsEnvironmentController::SpawnBtsCharacters(::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId btsCharacterPrefabToSpawn, bool useAlternativeMaterial)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                            "SpawnBtsCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BTSCharacterDataModel__PrefabWithId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, btsCharacterPrefabToSpawn, useAlternativeMaterial);
}
/// @param immediately: bool (default: false)
 void ::GlobalNamespace::BtsResultsEnvironmentController::Activate(bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, immediately);
}
/// @param immediately: bool (default: false)
 void ::GlobalNamespace::BtsResultsEnvironmentController::Deactivate(bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, immediately);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersDelayed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                            "DestroyCharactersDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersAndStopAnimations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                            "DestroyCharactersAndStopAnimations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::BtsResultsEnvironmentController::BtsResultsEnvironmentController()  : ::GlobalNamespace::BaseResultsEnvironmentController(THROW_UNLESS(::il2cpp_utils::New<BtsResultsEnvironmentController>())) {}
 void ::GlobalNamespace::BtsResultsEnvironmentController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
