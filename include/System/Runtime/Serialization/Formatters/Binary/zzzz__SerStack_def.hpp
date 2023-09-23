#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
// Type: System.Runtime.Serialization.Formatters.Binary::SerStack
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3288))
// CS Name: System.Runtime.Serialization.Formatters.Binary.SerStack
class CORDL_TYPE SerStack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SerStack() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerStack", modifiers: " const&", def_value: None }]
constexpr SerStack(SerStack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerStack", modifiers: "&&", def_value: None }]
constexpr SerStack(SerStack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerStack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerStack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerStack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerStack& operator=(SerStack&& o) noexcept = default;
  constexpr SerStack& operator=(SerStack const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_objects, put=__set_objects))  objects;

constexpr void __set_objects(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_objects() const;

 ::StringW __declspec(property(get=__get_stackId, put=__set_stackId))  stackId;

constexpr void __set_stackId(::StringW value) ;

constexpr ::StringW __get_stackId() const;

 int32_t __declspec(property(get=__get_top, put=__set_top))  top;

constexpr void __set_top(int32_t value) ;

constexpr int32_t __get_top() const;


// Methods

// Ctor Parameters [CppParam { name: "stackId", ty: "::StringW", modifiers: "", def_value: None }]
explicit SerStack(::StringW stackId) ;

/// @brief Method .ctor addr 0x235f048 size 0x74 virtual false final false
 void _ctor(::StringW stackId) ;

/// @brief Method Push addr 0x2360f5c size 0xac virtual false final false
 void Push(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Pop addr 0x2361008 size 0x50 virtual false final false
 ::bs_hook::Il2CppWrapperType Pop() ;

/// @brief Method IncreaseCapacity addr 0x2369790 size 0x88 virtual false final false
 void IncreaseCapacity() ;

/// @brief Method Peek addr 0x23616e4 size 0x40 virtual false final false
 ::bs_hook::Il2CppWrapperType Peek() ;

/// @brief Method PeekPeek addr 0x23686f0 size 0x44 virtual false final false
 ::bs_hook::Il2CppWrapperType PeekPeek() ;

/// @brief Method IsEmpty addr 0x2365bec size 0x10 virtual false final false
 bool IsEmpty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::SerStack);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerStack, "System.Runtime.Serialization.Formatters.Binary", "SerStack");
