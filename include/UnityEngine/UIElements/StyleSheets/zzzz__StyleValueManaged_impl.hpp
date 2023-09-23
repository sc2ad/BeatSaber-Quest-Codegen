#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValueManaged_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyword", ty: "UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::UIElements::StyleSheets::StyleValueManaged::StyleValueManaged(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::StyleKeyword keyword, ::bs_hook::Il2CppWrapperType value) noexcept : ::bs_hook::ValueTypeWrapper() {this->id = id;
this->keyword = keyword;
this->value = value;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValueManaged::__set_id(UnityEngine::UIElements::StyleSheets::StylePropertyId value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleSheets::StylePropertyId, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::StyleSheets::StylePropertyId>(value));
}
constexpr UnityEngine::UIElements::StyleSheets::StylePropertyId UnityEngine::UIElements::StyleSheets::StyleValueManaged::__get_id() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleSheets::StylePropertyId, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValueManaged::__set_keyword(UnityEngine::UIElements::StyleKeyword value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleKeyword, 0x4>(this->__instance, std::forward<UnityEngine::UIElements::StyleKeyword>(value));
}
constexpr UnityEngine::UIElements::StyleKeyword UnityEngine::UIElements::StyleSheets::StyleValueManaged::__get_keyword() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleKeyword, 0x4>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValueManaged::__set_value(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType UnityEngine::UIElements::StyleSheets::StyleValueManaged::__get_value() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance);
}
