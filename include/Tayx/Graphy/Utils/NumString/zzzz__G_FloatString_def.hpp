#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace Tayx::Graphy::Utils::NumString {
class G_FloatString;
}
// Type: Tayx.Graphy.Utils.NumString::G_FloatString
namespace Tayx::Graphy::Utils::NumString {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15194))
// CS Name: Tayx.Graphy.Utils.NumString.G_FloatString
class CORDL_TYPE G_FloatString : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~G_FloatString() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_FloatString", modifiers: " const&", def_value: None }]
constexpr G_FloatString(G_FloatString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_FloatString", modifiers: "&&", def_value: None }]
constexpr G_FloatString(G_FloatString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_FloatString(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr G_FloatString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_FloatString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_FloatString& operator=(G_FloatString&& o) noexcept = default;
  constexpr G_FloatString& operator=(G_FloatString const& o) noexcept = default;
                


// Fields

/// @brief Field m_floatFormat offset 0
static constexpr ::ConstString  m_floatFormat{u"0.0"};

static float_t __declspec(property(get=__get_m_decimalMultiplier, put=__set_m_decimalMultiplier))  m_decimalMultiplier;

static void __set_m_decimalMultiplier(float_t value) ;

static float_t __get_m_decimalMultiplier() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_m_negativeBuffer, put=__set_m_negativeBuffer))  m_negativeBuffer;

static void __set_m_negativeBuffer(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_m_negativeBuffer() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_m_positiveBuffer, put=__set_m_positiveBuffer))  m_positiveBuffer;

static void __set_m_positiveBuffer(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_m_positiveBuffer() ;


// Properties

static float_t __declspec(property(get=get_MinValue))  MinValue;

static float_t __declspec(property(get=get_MaxValue))  MaxValue;


// Methods

/// @brief Method get_MinValue addr 0x287335c size 0x70 virtual false final false
static float_t get_MinValue() ;

/// @brief Method get_MaxValue addr 0x2873430 size 0x68 virtual false final false
static float_t get_MaxValue() ;

/// @brief Method Init addr 0x2873498 size 0x298 virtual false final false
static void Init(float_t minNegativeValue, float_t maxPositiveValue) ;

/// @brief Method Dispose addr 0x28716a8 size 0x98 virtual false final false
static void Dispose() ;

/// @brief Method ToStringNonAlloc addr 0x28737f0 size 0x140 virtual false final false
static ::StringW ToStringNonAlloc(float_t value) ;

/// @brief Method ToStringNonAlloc addr 0x2873930 size 0x140 virtual false final false
static ::StringW ToStringNonAlloc(float_t value, ::StringW format) ;

/// @brief Method ToInt addr 0x2873a70 size 0x1c virtual false final false
static int32_t ToInt(float_t f) ;

/// @brief Method ToFloat addr 0x2873a8c size 0x8 virtual false final false
static float_t ToFloat(int32_t i) ;

/// @brief Method ToIndex addr 0x2873730 size 0xc0 virtual false final false
static int32_t ToIndex(float_t f) ;

/// @brief Method FromIndex addr 0x28733cc size 0x64 virtual false final false
static float_t FromIndex(int32_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Utils::NumString
} // end anonymous namespace
NEED_NO_BOX(::Tayx::Graphy::Utils::NumString::G_FloatString);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Utils::NumString::G_FloatString, "Tayx.Graphy.Utils.NumString", "G_FloatString");
