#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Tayx::Graphy::Utils::NumString {
class G_IntString;
}
// Type: Tayx.Graphy.Utils.NumString::G_IntString
namespace Tayx::Graphy::Utils::NumString {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15195))
// CS Name: Tayx.Graphy.Utils.NumString.G_IntString
class CORDL_TYPE G_IntString : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~G_IntString() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_IntString", modifiers: " const&", def_value: None }]
constexpr G_IntString(G_IntString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_IntString", modifiers: "&&", def_value: None }]
constexpr G_IntString(G_IntString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_IntString(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr G_IntString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_IntString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_IntString& operator=(G_IntString&& o) noexcept = default;
  constexpr G_IntString& operator=(G_IntString const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_m_negativeBuffer, put=__set_m_negativeBuffer))  m_negativeBuffer;

static void __set_m_negativeBuffer(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_m_negativeBuffer() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_m_positiveBuffer, put=__set_m_positiveBuffer))  m_positiveBuffer;

static void __set_m_positiveBuffer(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_m_positiveBuffer() ;


// Properties

static int32_t __declspec(property(get=get_MinValue))  MinValue;

static int32_t __declspec(property(get=get_MaxValue))  MaxValue;


// Methods

/// @brief Method get_MinValue addr 0x2873b24 size 0x6c virtual false final false
static int32_t get_MinValue() ;

/// @brief Method get_MaxValue addr 0x2873b90 size 0x64 virtual false final false
static int32_t get_MaxValue() ;

/// @brief Method Init addr 0x2873bf4 size 0x280 virtual false final false
static void Init(int32_t minNegativeValue, int32_t maxPositiveValue) ;

/// @brief Method Dispose addr 0x2871610 size 0x98 virtual false final false
static void Dispose() ;

/// @brief Method ToStringNonAlloc addr 0x2873e74 size 0x120 virtual false final false
static ::StringW ToStringNonAlloc(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Utils::NumString
} // end anonymous namespace
NEED_NO_BOX(::Tayx::Graphy::Utils::NumString::G_IntString);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Utils::NumString::G_IntString, "Tayx.Graphy.Utils.NumString", "G_IntString");
