#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTrackedSpace_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
//  Writing Method size for method: LIV::SDK::Unity::SDKTrackedSpace.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LIV::SDK::Unity::SDKTrackedSpace (*)()>(&LIV::SDK::Unity::SDKTrackedSpace::get_empty)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x20a2d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTrackedSpace>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKTrackedSpace.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKTrackedSpace::*)()>(&LIV::SDK::Unity::SDKTrackedSpace::ToString)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x20a2e58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LIV::SDK::Unity::SDKTrackedSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTrackedSpace>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "trackedSpaceWorldPosition", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedSpaceWorldRotation", ty: "LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedSpaceLocalScale", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedSpaceLocalToWorldMatrix", ty: "LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedSpaceWorldToLocalMatrix", ty: "LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr LIV::SDK::Unity::SDKTrackedSpace::SDKTrackedSpace(LIV::SDK::Unity::SDKVector3 trackedSpaceWorldPosition, LIV::SDK::Unity::SDKQuaternion trackedSpaceWorldRotation, LIV::SDK::Unity::SDKVector3 trackedSpaceLocalScale, LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceLocalToWorldMatrix, LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceWorldToLocalMatrix) noexcept : ::bs_hook::ValueTypeWrapper() {this->trackedSpaceWorldPosition = trackedSpaceWorldPosition;
this->trackedSpaceWorldRotation = trackedSpaceWorldRotation;
this->trackedSpaceLocalScale = trackedSpaceLocalScale;
this->trackedSpaceLocalToWorldMatrix = trackedSpaceLocalToWorldMatrix;
this->trackedSpaceWorldToLocalMatrix = trackedSpaceWorldToLocalMatrix;
}
constexpr void LIV::SDK::Unity::SDKTrackedSpace::__set_trackedSpaceWorldPosition(LIV::SDK::Unity::SDKVector3 value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKVector3, 0x0>(this->__instance, std::forward<LIV::SDK::Unity::SDKVector3>(value));
}
constexpr LIV::SDK::Unity::SDKVector3 LIV::SDK::Unity::SDKTrackedSpace::__get_trackedSpaceWorldPosition() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKVector3, 0x0>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTrackedSpace::__set_trackedSpaceWorldRotation(LIV::SDK::Unity::SDKQuaternion value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKQuaternion, 0xc>(this->__instance, std::forward<LIV::SDK::Unity::SDKQuaternion>(value));
}
constexpr LIV::SDK::Unity::SDKQuaternion LIV::SDK::Unity::SDKTrackedSpace::__get_trackedSpaceWorldRotation() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKQuaternion, 0xc>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTrackedSpace::__set_trackedSpaceLocalScale(LIV::SDK::Unity::SDKVector3 value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKVector3, 0x1c>(this->__instance, std::forward<LIV::SDK::Unity::SDKVector3>(value));
}
constexpr LIV::SDK::Unity::SDKVector3 LIV::SDK::Unity::SDKTrackedSpace::__get_trackedSpaceLocalScale() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKVector3, 0x1c>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTrackedSpace::__set_trackedSpaceLocalToWorldMatrix(LIV::SDK::Unity::SDKMatrix4x4 value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKMatrix4x4, 0x28>(this->__instance, std::forward<LIV::SDK::Unity::SDKMatrix4x4>(value));
}
constexpr LIV::SDK::Unity::SDKMatrix4x4 LIV::SDK::Unity::SDKTrackedSpace::__get_trackedSpaceLocalToWorldMatrix() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKMatrix4x4, 0x28>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTrackedSpace::__set_trackedSpaceWorldToLocalMatrix(LIV::SDK::Unity::SDKMatrix4x4 value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKMatrix4x4, 0x68>(this->__instance, std::forward<LIV::SDK::Unity::SDKMatrix4x4>(value));
}
constexpr LIV::SDK::Unity::SDKMatrix4x4 LIV::SDK::Unity::SDKTrackedSpace::__get_trackedSpaceWorldToLocalMatrix() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKMatrix4x4, 0x68>(this->__instance);
}
 LIV::SDK::Unity::SDKTrackedSpace LIV::SDK::Unity::SDKTrackedSpace::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTrackedSpace>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LIV::SDK::Unity::SDKTrackedSpace, false>(nullptr, ___internal_method);
}
 ::StringW LIV::SDK::Unity::SDKTrackedSpace::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTrackedSpace>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
