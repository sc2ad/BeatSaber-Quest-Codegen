#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BaseResultsEnvironmentController_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
//  Writing Method size for method: GlobalNamespace::BaseResultsEnvironmentController.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseResultsEnvironmentController::*)(bool)>(&GlobalNamespace::BaseResultsEnvironmentController::Activate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x222c964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseResultsEnvironmentController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseResultsEnvironmentController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseResultsEnvironmentController.Deactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseResultsEnvironmentController::*)(bool)>(&GlobalNamespace::BaseResultsEnvironmentController::Deactivate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x222c988;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseResultsEnvironmentController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseResultsEnvironmentController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseResultsEnvironmentController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseResultsEnvironmentController::*)(GlobalNamespace::IReadonlyBeatmapData)>(&GlobalNamespace::BaseResultsEnvironmentController::Setup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BaseResultsEnvironmentController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseResultsEnvironmentController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseResultsEnvironmentController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseResultsEnvironmentController::*)()>(&GlobalNamespace::BaseResultsEnvironmentController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222c9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseResultsEnvironmentController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @param immediately: bool (default: false)
 void GlobalNamespace::BaseResultsEnvironmentController::Activate(bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseResultsEnvironmentController>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, immediately);
}
/// @param immediately: bool (default: false)
 void GlobalNamespace::BaseResultsEnvironmentController::Deactivate(bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseResultsEnvironmentController>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, immediately);
}
 void GlobalNamespace::BaseResultsEnvironmentController::Setup(GlobalNamespace::IReadonlyBeatmapData beatmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseResultsEnvironmentController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IReadonlyBeatmapData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapData);
}
// Ctor Parameters []
 GlobalNamespace::BaseResultsEnvironmentController::BaseResultsEnvironmentController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BaseResultsEnvironmentController>())) {}
 void GlobalNamespace::BaseResultsEnvironmentController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseResultsEnvironmentController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
