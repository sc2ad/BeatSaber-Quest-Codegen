#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Serialization {
class SurrogateHashtable;
}
// Type: System.Runtime.Serialization::SurrogateHashtable
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3783))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3235))
// CS Name: System.Runtime.Serialization.SurrogateHashtable
class CORDL_TYPE SurrogateHashtable : public ::System::Collections::Hashtable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SurrogateHashtable() = default;

// Ctor Parameters [CppParam { name: "", ty: "SurrogateHashtable", modifiers: " const&", def_value: None }]
constexpr SurrogateHashtable(SurrogateHashtable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SurrogateHashtable", modifiers: "&&", def_value: None }]
constexpr SurrogateHashtable(SurrogateHashtable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SurrogateHashtable(void* ptr) noexcept : ::System::Collections::Hashtable(ptr) {
}


  constexpr SurrogateHashtable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SurrogateHashtable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SurrogateHashtable& operator=(SurrogateHashtable&& o) noexcept = default;
  constexpr SurrogateHashtable& operator=(SurrogateHashtable const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit SurrogateHashtable(int32_t size) ;

/// @brief Method .ctor addr 0x2353804 size 0x8 virtual false final false
 void _ctor(int32_t size) ;

/// @brief Method KeyEquals addr 0x2353bb0 size 0x128 virtual true final false
 bool KeyEquals(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateHashtable, "System.Runtime.Serialization", "SurrogateHashtable");
