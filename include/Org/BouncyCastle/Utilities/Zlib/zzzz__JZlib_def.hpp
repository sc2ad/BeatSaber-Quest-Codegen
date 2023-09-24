#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class JZlib;
}
// Type: Org.BouncyCastle.Utilities.Zlib::JZlib
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1824))
// CS Name: Org.BouncyCastle.Utilities.Zlib.JZlib
class CORDL_TYPE JZlib : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JZlib() = default;

// Ctor Parameters [CppParam { name: "", ty: "JZlib", modifiers: " const&", def_value: None }]
constexpr JZlib(JZlib const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JZlib", modifiers: "&&", def_value: None }]
constexpr JZlib(JZlib&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JZlib(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JZlib& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JZlib& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JZlib& operator=(JZlib&& o) noexcept = default;
  constexpr JZlib& operator=(JZlib const& o) noexcept = default;
                


// Fields

/// @brief Field _version offset 0
static constexpr ::ConstString  _version{u"1.0.7"};

/// @brief Field Z_NO_COMPRESSION offset 0
static constexpr int32_t  Z_NO_COMPRESSION{0};

/// @brief Field Z_BEST_SPEED offset 0
static constexpr int32_t  Z_BEST_SPEED{1};

/// @brief Field Z_BEST_COMPRESSION offset 0
static constexpr int32_t  Z_BEST_COMPRESSION{9};

/// @brief Field Z_DEFAULT_COMPRESSION offset 0
static constexpr int32_t  Z_DEFAULT_COMPRESSION{-1};

/// @brief Field Z_FILTERED offset 0
static constexpr int32_t  Z_FILTERED{1};

/// @brief Field Z_HUFFMAN_ONLY offset 0
static constexpr int32_t  Z_HUFFMAN_ONLY{2};

/// @brief Field Z_DEFAULT_STRATEGY offset 0
static constexpr int32_t  Z_DEFAULT_STRATEGY{0};

/// @brief Field Z_NO_FLUSH offset 0
static constexpr int32_t  Z_NO_FLUSH{0};

/// @brief Field Z_PARTIAL_FLUSH offset 0
static constexpr int32_t  Z_PARTIAL_FLUSH{1};

/// @brief Field Z_SYNC_FLUSH offset 0
static constexpr int32_t  Z_SYNC_FLUSH{2};

/// @brief Field Z_FULL_FLUSH offset 0
static constexpr int32_t  Z_FULL_FLUSH{3};

/// @brief Field Z_FINISH offset 0
static constexpr int32_t  Z_FINISH{4};

/// @brief Field Z_OK offset 0
static constexpr int32_t  Z_OK{0};

/// @brief Field Z_STREAM_END offset 0
static constexpr int32_t  Z_STREAM_END{1};

/// @brief Field Z_NEED_DICT offset 0
static constexpr int32_t  Z_NEED_DICT{2};

/// @brief Field Z_ERRNO offset 0
static constexpr int32_t  Z_ERRNO{-1};

/// @brief Field Z_STREAM_ERROR offset 0
static constexpr int32_t  Z_STREAM_ERROR{-2};

/// @brief Field Z_DATA_ERROR offset 0
static constexpr int32_t  Z_DATA_ERROR{-3};

/// @brief Field Z_MEM_ERROR offset 0
static constexpr int32_t  Z_MEM_ERROR{-4};

/// @brief Field Z_BUF_ERROR offset 0
static constexpr int32_t  Z_BUF_ERROR{-5};

/// @brief Field Z_VERSION_ERROR offset 0
static constexpr int32_t  Z_VERSION_ERROR{-6};


// Methods

/// @brief Method version addr 0x10dd6c4 size 0x40 virtual false final false
static ::StringW version() ;

static Org::BouncyCastle::Utilities::Zlib::JZlib New_ctor() ;

/// @brief Method .ctor addr 0x10dd704 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(Org::BouncyCastle::Utilities::Zlib::JZlib);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Zlib::JZlib, "Org.BouncyCastle.Utilities.Zlib", "JZlib");
