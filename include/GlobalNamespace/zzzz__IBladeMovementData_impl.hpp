#pragma once
namespace {
#include "GlobalNamespace/zzzz__IBladeMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBladeMovementData.get_bladeSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::IBladeMovementData::*)()>(&::GlobalNamespace::IBladeMovementData::get_bladeSpeed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IBladeMovementData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBladeMovementData.get_lastAddedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::IBladeMovementData::*)()>(&::GlobalNamespace::IBladeMovementData::get_lastAddedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IBladeMovementData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBladeMovementData.get_prevAddedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::IBladeMovementData::*)()>(&::GlobalNamespace::IBladeMovementData::get_prevAddedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IBladeMovementData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 float_t ::GlobalNamespace::IBladeMovementData::get_bladeSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData>::get(),
                            "get_bladeSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::BladeMovementDataElement ::GlobalNamespace::IBladeMovementData::get_lastAddedData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData>::get(),
                            "get_lastAddedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::BladeMovementDataElement ::GlobalNamespace::IBladeMovementData::get_prevAddedData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData>::get(),
                            "get_prevAddedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
