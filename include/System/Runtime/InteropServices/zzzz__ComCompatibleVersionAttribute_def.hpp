#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::InteropServices {
class ComCompatibleVersionAttribute;
}
// Type: System.Runtime.InteropServices::ComCompatibleVersionAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3326))
// CS Name: System.Runtime.InteropServices.ComCompatibleVersionAttribute
class CORDL_TYPE ComCompatibleVersionAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ComCompatibleVersionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComCompatibleVersionAttribute", modifiers: " const&", def_value: None }]
constexpr ComCompatibleVersionAttribute(ComCompatibleVersionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComCompatibleVersionAttribute", modifiers: "&&", def_value: None }]
constexpr ComCompatibleVersionAttribute(ComCompatibleVersionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComCompatibleVersionAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ComCompatibleVersionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComCompatibleVersionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComCompatibleVersionAttribute& operator=(ComCompatibleVersionAttribute&& o) noexcept = default;
  constexpr ComCompatibleVersionAttribute& operator=(ComCompatibleVersionAttribute const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__major, put=__set__major))  _major;

constexpr void __set__major(int32_t value) ;

constexpr int32_t __get__major() const;

 int32_t __declspec(property(get=__get__minor, put=__set__minor))  _minor;

constexpr void __set__minor(int32_t value) ;

constexpr int32_t __get__minor() const;

 int32_t __declspec(property(get=__get__build, put=__set__build))  _build;

constexpr void __set__build(int32_t value) ;

constexpr int32_t __get__build() const;

 int32_t __declspec(property(get=__get__revision, put=__set__revision))  _revision;

constexpr void __set__revision(int32_t value) ;

constexpr int32_t __get__revision() const;


// Methods

// Ctor Parameters [CppParam { name: "major", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "build", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "revision", ty: "int32_t", modifiers: "", def_value: None }]
explicit ComCompatibleVersionAttribute(int32_t major, int32_t minor, int32_t build, int32_t revision) ;

/// @brief Method .ctor addr 0x236afa4 size 0x40 virtual false final false
 void _ctor(int32_t major, int32_t minor, int32_t build, int32_t revision) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::InteropServices::ComCompatibleVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ComCompatibleVersionAttribute, "System.Runtime.InteropServices", "ComCompatibleVersionAttribute");
