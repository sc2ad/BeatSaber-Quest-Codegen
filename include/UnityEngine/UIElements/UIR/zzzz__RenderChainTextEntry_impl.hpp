#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainTextEntry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
// Ctor Parameters [CppParam { name: "command", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: Some("csnull") }, CppParam { name: "firstVertex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::RenderChainTextEntry::RenderChainTextEntry(UnityEngine::UIElements::UIR::RenderChainCommand command, int32_t firstVertex, int32_t vertexCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->command = command;
this->firstVertex = firstVertex;
this->vertexCount = vertexCount;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainTextEntry::__set_command(UnityEngine::UIElements::UIR::RenderChainCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::UIR::RenderChainCommand>(value));
}
constexpr UnityEngine::UIElements::UIR::RenderChainCommand UnityEngine::UIElements::UIR::RenderChainTextEntry::__get_command() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainTextEntry::__set_firstVertex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChainTextEntry::__get_firstVertex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainTextEntry::__set_vertexCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChainTextEntry::__get_vertexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
