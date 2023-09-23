#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System::Security::Util {
class System__Security__Util__Tokenizer__StringMaker;
}
// Forward declare root types
namespace System {
class SharedStatics;
}
// Type: System::SharedStatics
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2568))
// CS Name: System.SharedStatics
class CORDL_TYPE SharedStatics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SharedStatics() = default;

// Ctor Parameters [CppParam { name: "", ty: "SharedStatics", modifiers: " const&", def_value: None }]
constexpr SharedStatics(SharedStatics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SharedStatics", modifiers: "&&", def_value: None }]
constexpr SharedStatics(SharedStatics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SharedStatics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SharedStatics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SharedStatics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SharedStatics& operator=(SharedStatics&& o) noexcept = default;
  constexpr SharedStatics& operator=(SharedStatics const& o) noexcept = default;
                


// Fields

static System::SharedStatics __declspec(property(get=__get__sharedStatics, put=__set__sharedStatics))  _sharedStatics;

static void __set__sharedStatics(System::SharedStatics value) ;

static System::SharedStatics __get__sharedStatics() ;

 System::Security::Util::System__Security__Util__Tokenizer__StringMaker __declspec(property(get=__get__maker, put=__set__maker))  _maker;

constexpr void __set__maker(System::Security::Util::System__Security__Util__Tokenizer__StringMaker value) ;

constexpr System::Security::Util::System__Security__Util__Tokenizer__StringMaker __get__maker() const;


// Methods

// Ctor Parameters []
explicit SharedStatics() ;

/// @brief Method .ctor addr 0x24834c0 size 0x4 virtual false final false
 void _ctor() ;

/// @brief Method GetSharedStringMaker addr 0x24834c8 size 0x1d0 virtual false final false
static System::Security::Util::System__Security__Util__Tokenizer__StringMaker GetSharedStringMaker() ;

/// @brief Method ReleaseSharedStringMaker addr 0x2483698 size 0x150 virtual false final false
static void ReleaseSharedStringMaker(ByRef<System::Security::Util::System__Security__Util__Tokenizer__StringMaker> maker) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::SharedStatics);
DEFINE_IL2CPP_ARG_TYPE(System::SharedStatics, "System", "SharedStatics");
