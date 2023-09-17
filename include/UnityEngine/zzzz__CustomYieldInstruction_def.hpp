#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine {
class CustomYieldInstruction;
}
// Type: UnityEngine::CustomYieldInstruction
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10183))
// CS Name: UnityEngine.CustomYieldInstruction
class CORDL_TYPE CustomYieldInstruction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CustomYieldInstruction() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomYieldInstruction", modifiers: " const&", def_value: None }]
constexpr CustomYieldInstruction(CustomYieldInstruction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomYieldInstruction", modifiers: "&&", def_value: None }]
constexpr CustomYieldInstruction(CustomYieldInstruction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomYieldInstruction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CustomYieldInstruction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomYieldInstruction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomYieldInstruction& operator=(CustomYieldInstruction&& o) noexcept = default;
  constexpr CustomYieldInstruction& operator=(CustomYieldInstruction const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_keepWaiting))  keepWaiting;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

/// @brief Method get_keepWaiting addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_keepWaiting() ;

/// @brief Method get_Current addr 0x2b5d944 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method MoveNext addr 0x2b5d94c size 0xc virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x2b5d958 size 0x4 virtual true final false
 void Reset() ;

// Ctor Parameters []
explicit CustomYieldInstruction() ;

/// @brief Method .ctor addr 0x2b57cbc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::CustomYieldInstruction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CustomYieldInstruction, "UnityEngine", "CustomYieldInstruction");
