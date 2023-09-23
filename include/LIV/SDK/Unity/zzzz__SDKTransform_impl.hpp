#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTransform_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
//  Writing Method size for method: LIV::SDK::Unity::SDKTransform.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LIV::SDK::Unity::SDKTransform (*)()>(&LIV::SDK::Unity::SDKTransform::get_empty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20a29e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTransform>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKTransform.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKTransform::*)()>(&LIV::SDK::Unity::SDKTransform::ToString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x20a3440;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LIV::SDK::Unity::SDKTransform),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTransform>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "localPosition", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "localRotation", ty: "LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "localScale", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }]
constexpr LIV::SDK::Unity::SDKTransform::SDKTransform(LIV::SDK::Unity::SDKVector3 localPosition, LIV::SDK::Unity::SDKQuaternion localRotation, LIV::SDK::Unity::SDKVector3 localScale) noexcept : ::bs_hook::ValueTypeWrapper() {this->localPosition = localPosition;
this->localRotation = localRotation;
this->localScale = localScale;
}
constexpr void LIV::SDK::Unity::SDKTransform::__set_localPosition(LIV::SDK::Unity::SDKVector3 value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKVector3, 0x0>(this->__instance, std::forward<LIV::SDK::Unity::SDKVector3>(value));
}
constexpr LIV::SDK::Unity::SDKVector3 LIV::SDK::Unity::SDKTransform::__get_localPosition() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKVector3, 0x0>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTransform::__set_localRotation(LIV::SDK::Unity::SDKQuaternion value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKQuaternion, 0xc>(this->__instance, std::forward<LIV::SDK::Unity::SDKQuaternion>(value));
}
constexpr LIV::SDK::Unity::SDKQuaternion LIV::SDK::Unity::SDKTransform::__get_localRotation() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKQuaternion, 0xc>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTransform::__set_localScale(LIV::SDK::Unity::SDKVector3 value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKVector3, 0x1c>(this->__instance, std::forward<LIV::SDK::Unity::SDKVector3>(value));
}
constexpr LIV::SDK::Unity::SDKVector3 LIV::SDK::Unity::SDKTransform::__get_localScale() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKVector3, 0x1c>(this->__instance);
}
 LIV::SDK::Unity::SDKTransform LIV::SDK::Unity::SDKTransform::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTransform>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LIV::SDK::Unity::SDKTransform, false>(nullptr, ___internal_method);
}
 ::StringW LIV::SDK::Unity::SDKTransform::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTransform>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
