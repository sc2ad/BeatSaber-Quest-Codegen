#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngineInternal/zzzz__TypeInferenceRules_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngineInternal::TypeInferenceRules::TypeInferenceRules(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngineInternal::TypeInferenceRules::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngineInternal::TypeInferenceRules::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngineInternal::TypeInferenceRules  ::UnityEngineInternal::TypeInferenceRules::TypeReferencedByFirstArgument{0};
constexpr ::UnityEngineInternal::TypeInferenceRules  ::UnityEngineInternal::TypeInferenceRules::TypeReferencedBySecondArgument{1};
constexpr ::UnityEngineInternal::TypeInferenceRules  ::UnityEngineInternal::TypeInferenceRules::ArrayOfTypeReferencedByFirstArgument{2};
constexpr ::UnityEngineInternal::TypeInferenceRules  ::UnityEngineInternal::TypeInferenceRules::TypeOfFirstArgument{3};
} // end anonymous namespace
