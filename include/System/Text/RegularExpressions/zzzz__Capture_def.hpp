#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class Capture;
}
// Type: System.Text.RegularExpressions::Capture
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7751))
// CS Name: System.Text.RegularExpressions.Capture
class CORDL_TYPE Capture : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Capture() = default;

// Ctor Parameters [CppParam { name: "", ty: "Capture", modifiers: " const&", def_value: None }]
constexpr Capture(Capture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Capture", modifiers: "&&", def_value: None }]
constexpr Capture(Capture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Capture(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Capture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Capture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Capture& operator=(Capture&& o) noexcept = default;
  constexpr Capture& operator=(Capture const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__Index_k__BackingField, put=__set__Index_k__BackingField))  _Index_k__BackingField;

constexpr void __set__Index_k__BackingField(int32_t value) ;

constexpr int32_t __get__Index_k__BackingField() const;

 int32_t __declspec(property(get=__get__Length_k__BackingField, put=__set__Length_k__BackingField))  _Length_k__BackingField;

constexpr void __set__Length_k__BackingField(int32_t value) ;

constexpr int32_t __get__Length_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Text_k__BackingField, put=__set__Text_k__BackingField))  _Text_k__BackingField;

constexpr void __set__Text_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Text_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_Index, put=set_Index))  Index;

 int32_t __declspec(property(get=get_Length, put=set_Length))  Length;

 ::StringW __declspec(property(get=get_Text, put=set_Text))  Text;

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit Capture(::StringW text, int32_t index, int32_t length) ;

/// @brief Method .ctor addr 0x27bc920 size 0x3c virtual false final false
 void _ctor(::StringW text, int32_t index, int32_t length) ;

/// @brief Method get_Index addr 0x27bc95c size 0x8 virtual false final false
 int32_t get_Index() ;

/// @brief Method set_Index addr 0x27bc964 size 0x8 virtual false final false
 void set_Index(int32_t value) ;

/// @brief Method get_Length addr 0x27bc96c size 0x8 virtual false final false
 int32_t get_Length() ;

/// @brief Method set_Length addr 0x27bc974 size 0x8 virtual false final false
 void set_Length(int32_t value) ;

/// @brief Method get_Text addr 0x27bc97c size 0x8 virtual false final false
 ::StringW get_Text() ;

/// @brief Method set_Text addr 0x27bc984 size 0x8 virtual false final false
 void set_Text(::StringW value) ;

/// @brief Method get_Value addr 0x27bc98c size 0x24 virtual false final false
 ::StringW get_Value() ;

/// @brief Method ToString addr 0x27bc9b0 size 0x4 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetLeftSubstring addr 0x27bc9b4 size 0x88 virtual false final false
 System::ReadOnlySpan_1<char16_t> GetLeftSubstring() ;

/// @brief Method GetRightSubstring addr 0x27bca3c size 0x90 virtual false final false
 System::ReadOnlySpan_1<char16_t> GetRightSubstring() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::Capture);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Capture, "System.Text.RegularExpressions", "Capture");
