#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
// Type: UnityEngine.ResourceManagement.Diagnostics::DiagnosticEvent
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14305))
// CS Name: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
struct CORDL_TYPE DiagnosticEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Graph", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Dependencies", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_ObjectId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Stream", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Frame", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DiagnosticEvent(::StringW m_Graph, ::ArrayW<int32_t> m_Dependencies, int32_t m_ObjectId, ::StringW m_DisplayName, int32_t m_Stream, int32_t m_Frame, int32_t m_Value) noexcept;


                    constexpr DiagnosticEvent(DiagnosticEvent const&) = default;
                    constexpr DiagnosticEvent(DiagnosticEvent&&) = default;
                    constexpr DiagnosticEvent& operator=(DiagnosticEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DiagnosticEvent& operator=(DiagnosticEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DiagnosticEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_Graph, put=__set_m_Graph))  m_Graph;

constexpr void __set_m_Graph(::StringW value) ;

constexpr ::StringW __get_m_Graph() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_Dependencies, put=__set_m_Dependencies))  m_Dependencies;

constexpr void __set_m_Dependencies(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_Dependencies() const;

 int32_t __declspec(property(get=__get_m_ObjectId, put=__set_m_ObjectId))  m_ObjectId;

constexpr void __set_m_ObjectId(int32_t value) ;

constexpr int32_t __get_m_ObjectId() const;

 ::StringW __declspec(property(get=__get_m_DisplayName, put=__set_m_DisplayName))  m_DisplayName;

constexpr void __set_m_DisplayName(::StringW value) ;

constexpr ::StringW __get_m_DisplayName() const;

 int32_t __declspec(property(get=__get_m_Stream, put=__set_m_Stream))  m_Stream;

constexpr void __set_m_Stream(int32_t value) ;

constexpr int32_t __get_m_Stream() const;

 int32_t __declspec(property(get=__get_m_Frame, put=__set_m_Frame))  m_Frame;

constexpr void __set_m_Frame(int32_t value) ;

constexpr int32_t __get_m_Frame() const;

 int32_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(int32_t value) ;

constexpr int32_t __get_m_Value() const;


// Properties

 ::StringW __declspec(property(get=get_Graph))  Graph;

 int32_t __declspec(property(get=get_ObjectId))  ObjectId;

 ::StringW __declspec(property(get=get_DisplayName))  DisplayName;

 ::ArrayW<int32_t> __declspec(property(get=get_Dependencies))  Dependencies;

 int32_t __declspec(property(get=get_Stream))  Stream;

 int32_t __declspec(property(get=get_Frame))  Frame;

 int32_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method get_Graph addr 0x2a43c8c size 0x8 virtual false final false
 ::StringW get_Graph() ;

/// @brief Method get_ObjectId addr 0x2a43c94 size 0x8 virtual false final false
 int32_t get_ObjectId() ;

/// @brief Method get_DisplayName addr 0x2a43c9c size 0x8 virtual false final false
 ::StringW get_DisplayName() ;

/// @brief Method get_Dependencies addr 0x2a43ca4 size 0x8 virtual false final false
 ::ArrayW<int32_t> get_Dependencies() ;

/// @brief Method get_Stream addr 0x2a43cac size 0x8 virtual false final false
 int32_t get_Stream() ;

/// @brief Method get_Frame addr 0x2a43cb4 size 0x8 virtual false final false
 int32_t get_Frame() ;

/// @brief Method get_Value addr 0x2a43cbc size 0x8 virtual false final false
 int32_t get_Value() ;

/// @brief Method .ctor addr 0x2a43cc4 size 0x18 virtual false final false
 void _ctor(::StringW graph, ::StringW name, int32_t id, int32_t stream, int32_t frame, int32_t value, ::ArrayW<int32_t> deps) ;

/// @brief Method Serialize addr 0x2a43cdc size 0x98 virtual false final false
 ::ArrayW<uint8_t> Serialize() ;

/// @brief Method Deserialize addr 0x2a43d74 size 0x8c virtual false final false
static ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent Deserialize(::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Diagnostics
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEvent");
