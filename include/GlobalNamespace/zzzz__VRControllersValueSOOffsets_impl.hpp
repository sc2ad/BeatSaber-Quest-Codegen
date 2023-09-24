#pragma once
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_impl.hpp"
#include "GlobalNamespace/zzzz__VRControllersValueSOOffsets_def.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::VRControllersValueSOOffsets.get_positionOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::VRControllersValueSOOffsets::*)()>(&GlobalNamespace::VRControllersValueSOOffsets::get_positionOffset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x222c8c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::VRControllersValueSOOffsets),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::VRControllersValueSOOffsets>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::VRControllersValueSOOffsets.get_rotationOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::VRControllersValueSOOffsets::*)()>(&GlobalNamespace::VRControllersValueSOOffsets::get_rotationOffset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x222c910;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::VRControllersValueSOOffsets),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::VRControllersValueSOOffsets>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::VRControllersValueSOOffsets._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersValueSOOffsets::*)()>(&GlobalNamespace::VRControllersValueSOOffsets::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222c95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::VRControllersValueSOOffsets>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::VRControllersValueSOOffsets::__set__positionOffset(GlobalNamespace::Vector3SO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Vector3SO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Vector3SO>(value));
}
constexpr GlobalNamespace::Vector3SO GlobalNamespace::VRControllersValueSOOffsets::__get__positionOffset() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Vector3SO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::VRControllersValueSOOffsets::__set__rotationOffset(GlobalNamespace::Vector3SO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Vector3SO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Vector3SO>(value));
}
constexpr GlobalNamespace::Vector3SO GlobalNamespace::VRControllersValueSOOffsets::__get__rotationOffset() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Vector3SO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Vector3 GlobalNamespace::VRControllersValueSOOffsets::get_positionOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::VRControllersValueSOOffsets>::get(),
                            "get_positionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 GlobalNamespace::VRControllersValueSOOffsets::get_rotationOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::VRControllersValueSOOffsets>::get(),
                            "get_rotationOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::VRControllersValueSOOffsets GlobalNamespace::VRControllersValueSOOffsets::New_ctor()  {
GlobalNamespace::VRControllersValueSOOffsets o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::VRControllersValueSOOffsets>())};
return o;
}
 void GlobalNamespace::VRControllersValueSOOffsets::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::VRControllersValueSOOffsets>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
