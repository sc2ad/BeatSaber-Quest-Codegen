#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Apache::Bzip2 {
class BZip2Constants;
}
// Type: Org.BouncyCastle.Apache.Bzip2::BZip2Constants
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1876))
// CS Name: Org.BouncyCastle.Apache.Bzip2.BZip2Constants
class CORDL_TYPE BZip2Constants : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BZip2Constants() = default;

// Ctor Parameters [CppParam { name: "", ty: "BZip2Constants", modifiers: " const&", def_value: None }]
constexpr BZip2Constants(BZip2Constants const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BZip2Constants", modifiers: "&&", def_value: None }]
constexpr BZip2Constants(BZip2Constants&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BZip2Constants(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BZip2Constants& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BZip2Constants& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BZip2Constants& operator=(BZip2Constants&& o) noexcept = default;
  constexpr BZip2Constants& operator=(BZip2Constants const& o) noexcept = default;
                


// Fields

/// @brief Field baseBlockSize offset 0
static constexpr int32_t  baseBlockSize{100000};

/// @brief Field MAX_ALPHA_SIZE offset 0
static constexpr int32_t  MAX_ALPHA_SIZE{258};

/// @brief Field MAX_CODE_LEN offset 0
static constexpr int32_t  MAX_CODE_LEN{23};

/// @brief Field RUNA offset 0
static constexpr int32_t  RUNA{0};

/// @brief Field RUNB offset 0
static constexpr int32_t  RUNB{1};

/// @brief Field N_GROUPS offset 0
static constexpr int32_t  N_GROUPS{6};

/// @brief Field G_SIZE offset 0
static constexpr int32_t  G_SIZE{50};

/// @brief Field N_ITERS offset 0
static constexpr int32_t  N_ITERS{4};

/// @brief Field MAX_SELECTORS offset 0
static constexpr int32_t  MAX_SELECTORS{18002};

/// @brief Field NUM_OVERSHOOT_BYTES offset 0
static constexpr int32_t  NUM_OVERSHOOT_BYTES{20};

static ::ArrayW<int32_t> __declspec(property(get=__get_rNums, put=__set_rNums))  rNums;

static void __set_rNums(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_rNums() ;


// Methods

static Org::BouncyCastle::Apache::Bzip2::BZip2Constants New_ctor() ;

/// @brief Method .ctor addr 0x10fd4f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Apache::Bzip2
NEED_NO_BOX(Org::BouncyCastle::Apache::Bzip2::BZip2Constants);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Apache::Bzip2::BZip2Constants, "Org.BouncyCastle.Apache.Bzip2", "BZip2Constants");
