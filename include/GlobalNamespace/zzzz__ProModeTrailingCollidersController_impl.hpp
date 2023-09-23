#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ProModeTrailingCollidersController_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__BoxCuttableBySaber_def.hpp"
//  Writing Method size for method: GlobalNamespace::ProModeTrailingCollidersController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProModeTrailingCollidersController::*)()>(&GlobalNamespace::ProModeTrailingCollidersController::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22433a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ProModeTrailingCollidersController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ProModeTrailingCollidersController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProModeTrailingCollidersController::*)()>(&GlobalNamespace::ProModeTrailingCollidersController::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2243440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ProModeTrailingCollidersController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ProModeTrailingCollidersController.HandleNoteDidMoveInJumpPhase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProModeTrailingCollidersController::*)()>(&GlobalNamespace::ProModeTrailingCollidersController::HandleNoteDidMoveInJumpPhase)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2243510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ProModeTrailingCollidersController>::get(),
                            "HandleNoteDidMoveInJumpPhase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ProModeTrailingCollidersController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProModeTrailingCollidersController::*)()>(&GlobalNamespace::ProModeTrailingCollidersController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2243680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ProModeTrailingCollidersController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ProModeTrailingCollidersController::__set__mainSmallCuttableBySaber(GlobalNamespace::BoxCuttableBySaber value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BoxCuttableBySaber, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BoxCuttableBySaber>(value));
}
constexpr GlobalNamespace::BoxCuttableBySaber GlobalNamespace::ProModeTrailingCollidersController::__get__mainSmallCuttableBySaber() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BoxCuttableBySaber, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ProModeTrailingCollidersController::__set__trailingSmallCuttableBySaberList(::ArrayW<GlobalNamespace::BoxCuttableBySaber> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::BoxCuttableBySaber>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::BoxCuttableBySaber>>(value));
}
constexpr ::ArrayW<GlobalNamespace::BoxCuttableBySaber> GlobalNamespace::ProModeTrailingCollidersController::__get__trailingSmallCuttableBySaberList() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::BoxCuttableBySaber>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ProModeTrailingCollidersController::__set__noteMovement(GlobalNamespace::NoteMovement value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteMovement, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteMovement>(value));
}
constexpr GlobalNamespace::NoteMovement GlobalNamespace::ProModeTrailingCollidersController::__get__noteMovement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteMovement, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ProModeTrailingCollidersController::__set__transform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::ProModeTrailingCollidersController::__get__transform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ProModeTrailingCollidersController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ProModeTrailingCollidersController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ProModeTrailingCollidersController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ProModeTrailingCollidersController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ProModeTrailingCollidersController::HandleNoteDidMoveInJumpPhase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ProModeTrailingCollidersController>::get(),
                            "HandleNoteDidMoveInJumpPhase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::ProModeTrailingCollidersController::ProModeTrailingCollidersController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ProModeTrailingCollidersController>())) {}
 void GlobalNamespace::ProModeTrailingCollidersController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ProModeTrailingCollidersController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
