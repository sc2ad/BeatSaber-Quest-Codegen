#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class ReverseCompare;
}
// Type: HoudiniEngineUnity::ReverseCompare
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9771))
// CS Name: HoudiniEngineUnity.ReverseCompare
class CORDL_TYPE ReverseCompare : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IComparer
constexpr operator  System::Collections::IComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ReverseCompare() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReverseCompare", modifiers: " const&", def_value: None }]
constexpr ReverseCompare(ReverseCompare const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReverseCompare", modifiers: "&&", def_value: None }]
constexpr ReverseCompare(ReverseCompare&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReverseCompare(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReverseCompare& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReverseCompare& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReverseCompare& operator=(ReverseCompare&& o) noexcept = default;
  constexpr ReverseCompare& operator=(ReverseCompare const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x2048824 size 0x78 virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y) ;

static HoudiniEngineUnity::ReverseCompare New_ctor() ;

/// @brief Method .ctor addr 0x204889c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::ReverseCompare);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::ReverseCompare, "HoudiniEngineUnity", "ReverseCompare");
