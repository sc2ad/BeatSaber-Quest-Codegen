#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UnityEngine__GraphicsBuffer__Target::UnityEngine__GraphicsBuffer__Target(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UnityEngine__GraphicsBuffer__Target::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UnityEngine__GraphicsBuffer__Target::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UnityEngine__GraphicsBuffer__Target  UnityEngine::UnityEngine__GraphicsBuffer__Target::Vertex{1};
constexpr UnityEngine::UnityEngine__GraphicsBuffer__Target  UnityEngine::UnityEngine__GraphicsBuffer__Target::Index{2};
constexpr UnityEngine::UnityEngine__GraphicsBuffer__Target  UnityEngine::UnityEngine__GraphicsBuffer__Target::CopySource{4};
constexpr UnityEngine::UnityEngine__GraphicsBuffer__Target  UnityEngine::UnityEngine__GraphicsBuffer__Target::CopyDestination{8};
constexpr UnityEngine::UnityEngine__GraphicsBuffer__Target  UnityEngine::UnityEngine__GraphicsBuffer__Target::Structured{16};
constexpr UnityEngine::UnityEngine__GraphicsBuffer__Target  UnityEngine::UnityEngine__GraphicsBuffer__Target::Raw{32};
constexpr UnityEngine::UnityEngine__GraphicsBuffer__Target  UnityEngine::UnityEngine__GraphicsBuffer__Target::Append{64};
constexpr UnityEngine::UnityEngine__GraphicsBuffer__Target  UnityEngine::UnityEngine__GraphicsBuffer__Target::Counter{128};
constexpr UnityEngine::UnityEngine__GraphicsBuffer__Target  UnityEngine::UnityEngine__GraphicsBuffer__Target::IndirectArguments{256};
constexpr UnityEngine::UnityEngine__GraphicsBuffer__Target  UnityEngine::UnityEngine__GraphicsBuffer__Target::Constant{512};
constexpr void UnityEngine::GraphicsBuffer::__set_m_Ptr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::GraphicsBuffer::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
