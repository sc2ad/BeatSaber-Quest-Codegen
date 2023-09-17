#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "LIV/SDK/Unity/zzzz__SDKPriority_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPriority.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKPriority (*)()>(&::LIV::SDK::Unity::SDKPriority::get_empty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20a24f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPriority>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPriority.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKPriority::*)()>(&::LIV::SDK::Unity::SDKPriority::ToString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x20a2504;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::LIV::SDK::Unity::SDKPriority),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPriority>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "pose", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipPlane", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stage", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resolution", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "feature", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearFarAdjustment", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "groundPlane", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved2", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKPriority::SDKPriority(int8_t pose, int8_t clipPlane, int8_t stage, int8_t resolution, int8_t feature, int8_t nearFarAdjustment, int8_t groundPlane, int8_t reserved2) noexcept : ::bs_hook::ValueTypeWrapper() {this->pose = pose;
this->clipPlane = clipPlane;
this->stage = stage;
this->resolution = resolution;
this->feature = feature;
this->nearFarAdjustment = nearFarAdjustment;
this->groundPlane = groundPlane;
this->reserved2 = reserved2;
}
constexpr void ::LIV::SDK::Unity::SDKPriority::__set_pose(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x0>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t ::LIV::SDK::Unity::SDKPriority::__get_pose() const {
return ::cordl_internals::getInstanceField<int8_t, 0x0>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPriority::__set_clipPlane(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x1>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t ::LIV::SDK::Unity::SDKPriority::__get_clipPlane() const {
return ::cordl_internals::getInstanceField<int8_t, 0x1>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPriority::__set_stage(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x2>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t ::LIV::SDK::Unity::SDKPriority::__get_stage() const {
return ::cordl_internals::getInstanceField<int8_t, 0x2>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPriority::__set_resolution(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x3>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t ::LIV::SDK::Unity::SDKPriority::__get_resolution() const {
return ::cordl_internals::getInstanceField<int8_t, 0x3>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPriority::__set_feature(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x4>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t ::LIV::SDK::Unity::SDKPriority::__get_feature() const {
return ::cordl_internals::getInstanceField<int8_t, 0x4>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPriority::__set_nearFarAdjustment(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x5>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t ::LIV::SDK::Unity::SDKPriority::__get_nearFarAdjustment() const {
return ::cordl_internals::getInstanceField<int8_t, 0x5>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPriority::__set_groundPlane(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x6>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t ::LIV::SDK::Unity::SDKPriority::__get_groundPlane() const {
return ::cordl_internals::getInstanceField<int8_t, 0x6>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPriority::__set_reserved2(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x7>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t ::LIV::SDK::Unity::SDKPriority::__get_reserved2() const {
return ::cordl_internals::getInstanceField<int8_t, 0x7>(this->__instance);
}
 ::LIV::SDK::Unity::SDKPriority ::LIV::SDK::Unity::SDKPriority::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPriority>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKPriority, false>(nullptr, ___internal_method);
}
 ::StringW ::LIV::SDK::Unity::SDKPriority::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPriority>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
