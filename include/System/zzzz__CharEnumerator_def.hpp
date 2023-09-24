#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class ICloneable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace System {
class CharEnumerator;
}
// Type: System::CharEnumerator
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2363))
// CS Name: System.CharEnumerator
class CORDL_TYPE CharEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<char16_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<char16_t>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CharEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CharEnumerator", modifiers: " const&", def_value: None }]
constexpr CharEnumerator(CharEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CharEnumerator", modifiers: "&&", def_value: None }]
constexpr CharEnumerator(CharEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CharEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CharEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CharEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CharEnumerator& operator=(CharEnumerator&& o) noexcept = default;
  constexpr CharEnumerator& operator=(CharEnumerator const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__str, put=__set__str))  _str;

constexpr void __set__str(::StringW value) ;

constexpr ::StringW __get__str() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 char16_t __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(char16_t value) ;

constexpr char16_t __get__currentElement() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;

 char16_t __declspec(property(get=get_Current))  Current;


// Methods

static System::CharEnumerator New_ctor(::StringW str) ;

/// @brief Method .ctor addr 0x23ba75c size 0x30 virtual false final false
 void _ctor(::StringW str) ;

/// @brief Method Clone addr 0x23ba78c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method MoveNext addr 0x23ba794 size 0x54 virtual true final true
 bool MoveNext() ;

/// @brief Method Dispose addr 0x23ba7e8 size 0x18 virtual true final true
 void Dispose() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x23ba800 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method get_Current addr 0x23ba864 size 0xa4 virtual true final true
 char16_t get_Current() ;

/// @brief Method Reset addr 0x23ba908 size 0x10 virtual true final true
 void Reset() ;

static System::CharEnumerator New_ctor() ;

/// @brief Method .ctor addr 0x23ba918 size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::CharEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::CharEnumerator, "System", "CharEnumerator");
