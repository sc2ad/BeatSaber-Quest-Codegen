#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_impl.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystem_def.hpp"
#include "UnityEngine/XR/zzzz__MeshGenerationResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList::*)()>(&UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d3a940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d3a97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Self", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList::UnityEngine__XR__XRMeshSubsystem__MeshTransformList(::cordl_internals::intptr_t m_Self) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Self = m_Self;
}
constexpr void UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList::__set_m_Self(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList::__get_m_Self() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
 void UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList::Dispose(::cordl_internals::intptr_t self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self);
}
//  Writing Method size for method: UnityEngine::XR::XRMeshSubsystem.InvokeMeshReadyDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRMeshSubsystem::*)(UnityEngine::XR::MeshGenerationResult, System::Action_1<UnityEngine::XR::MeshGenerationResult>)>(&UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d3a8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRMeshSubsystem>::get(),
                            "InvokeMeshReadyDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::MeshGenerationResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::XR::MeshGenerationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRMeshSubsystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRMeshSubsystem::*)()>(&UnityEngine::XR::XRMeshSubsystem::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d3a8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRMeshSubsystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate(UnityEngine::XR::MeshGenerationResult result, System::Action_1<UnityEngine::XR::MeshGenerationResult> onMeshGenerationComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRMeshSubsystem>::get(),
                            "InvokeMeshReadyDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::MeshGenerationResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::XR::MeshGenerationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, onMeshGenerationComplete);
}
 UnityEngine::XR::XRMeshSubsystem UnityEngine::XR::XRMeshSubsystem::New_ctor()  {
UnityEngine::XR::XRMeshSubsystem o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::XR::XRMeshSubsystem>())};
return o;
}
 void UnityEngine::XR::XRMeshSubsystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRMeshSubsystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
