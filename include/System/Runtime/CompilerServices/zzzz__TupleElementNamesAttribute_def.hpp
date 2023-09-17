#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
class TupleElementNamesAttribute;
}
// Type: System.Runtime.CompilerServices::TupleElementNamesAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3378))
// CS Name: System.Runtime.CompilerServices.TupleElementNamesAttribute
class CORDL_TYPE TupleElementNamesAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TupleElementNamesAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TupleElementNamesAttribute", modifiers: " const&", def_value: None }]
constexpr TupleElementNamesAttribute(TupleElementNamesAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TupleElementNamesAttribute", modifiers: "&&", def_value: None }]
constexpr TupleElementNamesAttribute(TupleElementNamesAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TupleElementNamesAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr TupleElementNamesAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TupleElementNamesAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TupleElementNamesAttribute& operator=(TupleElementNamesAttribute&& o) noexcept = default;
  constexpr TupleElementNamesAttribute& operator=(TupleElementNamesAttribute const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get__transformNames, put=__set__transformNames))  _transformNames;

constexpr void __set__transformNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__transformNames() const;


// Methods

// Ctor Parameters [CppParam { name: "transformNames", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
explicit TupleElementNamesAttribute(::ArrayW<::StringW> transformNames) ;

/// @brief Method .ctor addr 0x236e3d8 size 0x78 virtual false final false
 void _ctor(::ArrayW<::StringW> transformNames) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::TupleElementNamesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TupleElementNamesAttribute, "System.Runtime.CompilerServices", "TupleElementNamesAttribute");
