#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_StorageType::HAPI_StorageType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_StorageType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_StorageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_StorageType  ::HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INVALID{-1};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  ::HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT{0};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  ::HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT64{1};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  ::HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_FLOAT{2};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  ::HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_FLOAT64{3};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  ::HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_STRING{4};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  ::HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_UINT8{5};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  ::HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT8{6};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  ::HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT16{7};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  ::HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_MAX{8};
} // end anonymous namespace
