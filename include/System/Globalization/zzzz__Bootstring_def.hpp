#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
class Bootstring;
}
// Type: System.Globalization::Bootstring
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3709))
// CS Name: System.Globalization.Bootstring
class CORDL_TYPE Bootstring : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Bootstring() = default;

// Ctor Parameters [CppParam { name: "", ty: "Bootstring", modifiers: " const&", def_value: None }]
constexpr Bootstring(Bootstring const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Bootstring", modifiers: "&&", def_value: None }]
constexpr Bootstring(Bootstring&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Bootstring(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Bootstring& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Bootstring& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Bootstring& operator=(Bootstring&& o) noexcept = default;
  constexpr Bootstring& operator=(Bootstring const& o) noexcept = default;
                


// Fields

 char16_t __declspec(property(get=__get_delimiter, put=__set_delimiter))  delimiter;

constexpr void __set_delimiter(char16_t value) ;

constexpr char16_t __get_delimiter() const;

 int32_t __declspec(property(get=__get_base_num, put=__set_base_num))  base_num;

constexpr void __set_base_num(int32_t value) ;

constexpr int32_t __get_base_num() const;

 int32_t __declspec(property(get=__get_tmin, put=__set_tmin))  tmin;

constexpr void __set_tmin(int32_t value) ;

constexpr int32_t __get_tmin() const;

 int32_t __declspec(property(get=__get_tmax, put=__set_tmax))  tmax;

constexpr void __set_tmax(int32_t value) ;

constexpr int32_t __get_tmax() const;

 int32_t __declspec(property(get=__get_skew, put=__set_skew))  skew;

constexpr void __set_skew(int32_t value) ;

constexpr int32_t __get_skew() const;

 int32_t __declspec(property(get=__get_damp, put=__set_damp))  damp;

constexpr void __set_damp(int32_t value) ;

constexpr int32_t __get_damp() const;

 int32_t __declspec(property(get=__get_initial_bias, put=__set_initial_bias))  initial_bias;

constexpr void __set_initial_bias(int32_t value) ;

constexpr int32_t __get_initial_bias() const;

 int32_t __declspec(property(get=__get_initial_n, put=__set_initial_n))  initial_n;

constexpr void __set_initial_n(int32_t value) ;

constexpr int32_t __get_initial_n() const;


// Methods

static System::Globalization::Bootstring New_ctor(char16_t delimiter, int32_t baseNum, int32_t tmin, int32_t tmax, int32_t skew, int32_t damp, int32_t initialBias, int32_t initialN) ;

/// @brief Method .ctor addr 0x240b638 size 0x6c virtual false final false
 void _ctor(char16_t delimiter, int32_t baseNum, int32_t tmin, int32_t tmax, int32_t skew, int32_t damp, int32_t initialBias, int32_t initialN) ;

/// @brief Method Encode addr 0x240abd8 size 0x344 virtual false final false
 ::StringW Encode(::StringW s, int32_t offset) ;

/// @brief Method EncodeDigit addr 0x240b6a4 size 0x18 virtual false final false
 char16_t EncodeDigit(int32_t d) ;

/// @brief Method DecodeDigit addr 0x240b734 size 0x38 virtual false final false
 int32_t DecodeDigit(char16_t c) ;

/// @brief Method Adapt addr 0x240b6bc size 0x78 virtual false final false
 int32_t Adapt(int32_t delta, int32_t numPoints, bool firstTime) ;

/// @brief Method Decode addr 0x240b360 size 0x2d8 virtual false final false
 ::StringW Decode(::StringW s, int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::Bootstring);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::Bootstring, "System.Globalization", "Bootstring");
