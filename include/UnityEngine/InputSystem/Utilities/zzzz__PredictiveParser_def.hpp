#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct PredictiveParser;
}
// Type: UnityEngine.InputSystem.Utilities::PredictiveParser
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6781))
// CS Name: UnityEngine.InputSystem.Utilities.PredictiveParser
struct CORDL_TYPE PredictiveParser : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Position", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PredictiveParser(int32_t m_Position) noexcept;


                    constexpr PredictiveParser(PredictiveParser const&) = default;
                    constexpr PredictiveParser(PredictiveParser&&) = default;
                    constexpr PredictiveParser& operator=(PredictiveParser const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PredictiveParser& operator=(PredictiveParser&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PredictiveParser(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(int32_t value) ;

constexpr int32_t __get_m_Position() const;


// Methods

/// @brief Method ExpectSingleChar addr 0x2983700 size 0x108 virtual false final false
 void ExpectSingleChar(System::ReadOnlySpan_1<char16_t> str, char16_t c) ;

/// @brief Method ExpectInt addr 0x2983808 size 0x12c virtual false final false
 int32_t ExpectInt(System::ReadOnlySpan_1<char16_t> str) ;

/// @brief Method ExpectString addr 0x2983934 size 0x234 virtual false final false
 System::ReadOnlySpan_1<char16_t> ExpectString(System::ReadOnlySpan_1<char16_t> str) ;

/// @brief Method AcceptSingleChar addr 0x2983b68 size 0x3c virtual false final false
 bool AcceptSingleChar(System::ReadOnlySpan_1<char16_t> str, char16_t c) ;

/// @brief Method AcceptString addr 0x2983ba4 size 0x130 virtual false final false
 bool AcceptString(System::ReadOnlySpan_1<char16_t> input, ByRef<System::ReadOnlySpan_1<char16_t>> output) ;

/// @brief Method AcceptInt addr 0x2983cd4 size 0x5c virtual false final false
 void AcceptInt(System::ReadOnlySpan_1<char16_t> str) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::PredictiveParser, "UnityEngine.InputSystem.Utilities", "PredictiveParser");
