#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Buffers {
class Utilities;
}
// Type: System.Buffers::Utilities
namespace System::Buffers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3875))
// CS Name: System.Buffers.Utilities
class CORDL_TYPE Utilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Utilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "Utilities", modifiers: " const&", def_value: None }]
constexpr Utilities(Utilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Utilities", modifiers: "&&", def_value: None }]
constexpr Utilities(Utilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Utilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Utilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Utilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Utilities& operator=(Utilities&& o) noexcept = default;
  constexpr Utilities& operator=(Utilities const& o) noexcept = default;
                


// Methods

/// @brief Method SelectBucketIndex addr 0x241e848 size 0x7c virtual false final false
static int32_t SelectBucketIndex(int32_t bufferSize) ;

/// @brief Method GetMaxSizeForBucket addr 0x241e8c4 size 0xc virtual false final false
static int32_t GetMaxSizeForBucket(int32_t binIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
NEED_NO_BOX(System::Buffers::Utilities);
DEFINE_IL2CPP_ARG_TYPE(System::Buffers::Utilities, "System.Buffers", "Utilities");
