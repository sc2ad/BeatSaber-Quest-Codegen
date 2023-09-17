#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__HumanBone_def.hpp"
#include "UnityEngine/zzzz__HumanLimit_def.hpp"
// Ctor Parameters [CppParam { name: "m_BoneName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_HumanName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "limit", ty: "::UnityEngine::HumanLimit", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::HumanBone::HumanBone(::StringW m_BoneName, ::StringW m_HumanName, ::UnityEngine::HumanLimit limit) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_BoneName = m_BoneName;
this->m_HumanName = m_HumanName;
this->limit = limit;
}
constexpr void ::UnityEngine::HumanBone::__set_m_BoneName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::HumanBone::__get_m_BoneName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::HumanBone::__set_m_HumanName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::HumanBone::__get_m_HumanName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::HumanBone::__set_limit(::UnityEngine::HumanLimit value)  {
::cordl_internals::setInstanceField<::UnityEngine::HumanLimit, 0x10>(this->__instance, std::forward<::UnityEngine::HumanLimit>(value));
}
constexpr ::UnityEngine::HumanLimit ::UnityEngine::HumanBone::__get_limit() const {
return ::cordl_internals::getInstanceField<::UnityEngine::HumanLimit, 0x10>(this->__instance);
}
} // end anonymous namespace
