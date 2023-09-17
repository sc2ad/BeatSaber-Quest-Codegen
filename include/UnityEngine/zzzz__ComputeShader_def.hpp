#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
class ComputeShader;
}
// Type: UnityEngine::ComputeShader
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10200))
// CS Name: UnityEngine.ComputeShader
class CORDL_TYPE ComputeShader : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ComputeShader() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: " const&", def_value: None }]
constexpr ComputeShader(ComputeShader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "&&", def_value: None }]
constexpr ComputeShader(ComputeShader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComputeShader(void* ptr) noexcept : ::UnityEngine::Object(ptr) {
}


  constexpr ComputeShader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComputeShader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComputeShader& operator=(ComputeShader&& o) noexcept = default;
  constexpr ComputeShader& operator=(ComputeShader const& o) noexcept = default;
                


// Methods

/// @brief Method FindKernel addr 0x2b67554 size 0x44 virtual false final false
 int32_t FindKernel(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ComputeShader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeShader, "UnityEngine", "ComputeShader");
