#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeTypeInfo_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HAPI_AttributeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HAPI_AttributeInfo::*)(::StringW)>(&HoudiniEngineUnity::HAPI_AttributeInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x201f600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_AttributeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "exists", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "owner", ty: "HoudiniEngineUnity::HAPI_AttributeOwner", modifiers: "", def_value: Some("{}") }, CppParam { name: "storage", ty: "HoudiniEngineUnity::HAPI_StorageType", modifiers: "", def_value: Some("{}") }, CppParam { name: "originalOwner", ty: "HoudiniEngineUnity::HAPI_AttributeOwner", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tupleSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalArrayElements", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "typeInfo", ty: "HoudiniEngineUnity::HAPI_AttributeTypeInfo", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_AttributeInfo::HAPI_AttributeInfo(bool exists, HoudiniEngineUnity::HAPI_AttributeOwner owner, HoudiniEngineUnity::HAPI_StorageType storage, HoudiniEngineUnity::HAPI_AttributeOwner originalOwner, int32_t count, int32_t tupleSize, int64_t totalArrayElements, HoudiniEngineUnity::HAPI_AttributeTypeInfo typeInfo) noexcept : ::bs_hook::ValueTypeWrapper() {this->exists = exists;
this->owner = owner;
this->storage = storage;
this->originalOwner = originalOwner;
this->count = count;
this->tupleSize = tupleSize;
this->totalArrayElements = totalArrayElements;
this->typeInfo = typeInfo;
}
constexpr void HoudiniEngineUnity::HAPI_AttributeInfo::__set_exists(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_AttributeInfo::__get_exists() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_AttributeInfo::__set_owner(HoudiniEngineUnity::HAPI_AttributeOwner value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeOwner, 0x4>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_AttributeOwner>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeOwner HoudiniEngineUnity::HAPI_AttributeInfo::__get_owner() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeOwner, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_AttributeInfo::__set_storage(HoudiniEngineUnity::HAPI_StorageType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_StorageType, 0x8>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_StorageType>(value));
}
constexpr HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_AttributeInfo::__get_storage() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_StorageType, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_AttributeInfo::__set_originalOwner(HoudiniEngineUnity::HAPI_AttributeOwner value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeOwner, 0xc>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_AttributeOwner>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeOwner HoudiniEngineUnity::HAPI_AttributeInfo::__get_originalOwner() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeOwner, 0xc>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_AttributeInfo::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_AttributeInfo::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_AttributeInfo::__set_tupleSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_AttributeInfo::__get_tupleSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_AttributeInfo::__set_totalArrayElements(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t HoudiniEngineUnity::HAPI_AttributeInfo::__get_totalArrayElements() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_AttributeInfo::__set_typeInfo(HoudiniEngineUnity::HAPI_AttributeTypeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeTypeInfo, 0x20>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_AttributeTypeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeInfo::__get_typeInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeTypeInfo, 0x20>(this->__instance);
}
/// @param ignored: ::StringW (default: csnull)
 void HoudiniEngineUnity::HAPI_AttributeInfo::_ctor(::StringW ignored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_AttributeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ignored);
}
