#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationHumanStream_def.hpp"
// Ctor Parameters [CppParam { name: "stream", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Animations::AnimationHumanStream::AnimationHumanStream(::cordl_internals::intptr_t stream) noexcept : ::bs_hook::ValueTypeWrapper() {this->stream = stream;
}
constexpr void UnityEngine::Animations::AnimationHumanStream::__set_stream(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::Animations::AnimationHumanStream::__get_stream() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
