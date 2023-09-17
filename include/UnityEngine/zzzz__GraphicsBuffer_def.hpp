#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct ____UnityEngine__GraphicsBuffer__Target;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Type: ::Target
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10068))
// CS Name: UnityEngine.GraphicsBuffer::Target
struct CORDL_TYPE ____UnityEngine__GraphicsBuffer__Target : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__GraphicsBuffer__Target(int32_t value__) noexcept;


                    constexpr ____UnityEngine__GraphicsBuffer__Target(____UnityEngine__GraphicsBuffer__Target const&) = default;
                    constexpr ____UnityEngine__GraphicsBuffer__Target(____UnityEngine__GraphicsBuffer__Target&&) = default;
                    constexpr ____UnityEngine__GraphicsBuffer__Target& operator=(____UnityEngine__GraphicsBuffer__Target const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__GraphicsBuffer__Target& operator=(____UnityEngine__GraphicsBuffer__Target&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__GraphicsBuffer__Target(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__GraphicsBuffer__Target_Unwrapped : int32_t {
__Vertex = 1,
__Index = 2,
__CopySource = 4,
__CopyDestination = 8,
__Structured = 16,
__Raw = 32,
__Append = 64,
__Counter = 128,
__IndirectArguments = 256,
__Constant = 512,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__GraphicsBuffer__Target_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__GraphicsBuffer__Target_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Vertex offset 0
static ::UnityEngine::____UnityEngine__GraphicsBuffer__Target const Vertex;

/// @brief Field Index offset 0
static ::UnityEngine::____UnityEngine__GraphicsBuffer__Target const Index;

/// @brief Field CopySource offset 0
static ::UnityEngine::____UnityEngine__GraphicsBuffer__Target const CopySource;

/// @brief Field CopyDestination offset 0
static ::UnityEngine::____UnityEngine__GraphicsBuffer__Target const CopyDestination;

/// @brief Field Structured offset 0
static ::UnityEngine::____UnityEngine__GraphicsBuffer__Target const Structured;

/// @brief Field Raw offset 0
static ::UnityEngine::____UnityEngine__GraphicsBuffer__Target const Raw;

/// @brief Field Append offset 0
static ::UnityEngine::____UnityEngine__GraphicsBuffer__Target const Append;

/// @brief Field Counter offset 0
static ::UnityEngine::____UnityEngine__GraphicsBuffer__Target const Counter;

/// @brief Field IndirectArguments offset 0
static ::UnityEngine::____UnityEngine__GraphicsBuffer__Target const IndirectArguments;

/// @brief Field Constant offset 0
static ::UnityEngine::____UnityEngine__GraphicsBuffer__Target const Constant;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::GraphicsBuffer
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10069))
// CS Name: UnityEngine.GraphicsBuffer
class CORDL_TYPE GraphicsBuffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Target = ::UnityEngine::____UnityEngine__GraphicsBuffer__Target;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GraphicsBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer", modifiers: " const&", def_value: None }]
constexpr GraphicsBuffer(GraphicsBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer", modifiers: "&&", def_value: None }]
constexpr GraphicsBuffer(GraphicsBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GraphicsBuffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GraphicsBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GraphicsBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GraphicsBuffer& operator=(GraphicsBuffer&& o) noexcept = default;
  constexpr GraphicsBuffer& operator=(GraphicsBuffer const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::____UnityEngine__GraphicsBuffer__Target, "UnityEngine", "GraphicsBuffer/Target");
NEED_NO_BOX(::UnityEngine::GraphicsBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GraphicsBuffer, "UnityEngine", "GraphicsBuffer");
