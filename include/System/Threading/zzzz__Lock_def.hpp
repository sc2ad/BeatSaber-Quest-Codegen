#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Threading {
class Lock;
}
// Type: System.Threading::Lock
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2695))
// CS Name: System.Threading.Lock
class CORDL_TYPE Lock : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Lock() = default;

// Ctor Parameters [CppParam { name: "", ty: "Lock", modifiers: " const&", def_value: None }]
constexpr Lock(Lock const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Lock", modifiers: "&&", def_value: None }]
constexpr Lock(Lock&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Lock(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Lock& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Lock& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Lock& operator=(Lock&& o) noexcept = default;
  constexpr Lock& operator=(Lock const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__lock, put=__set__lock))  _lock;

constexpr void __set__lock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__lock() const;


// Methods

/// @brief Method Acquire addr 0x24a6c88 size 0x8 virtual false final false
 void Acquire() ;

/// @brief Method Release addr 0x24a6cac size 0x8 virtual false final false
 void Release() ;

// Ctor Parameters []
explicit Lock() ;

/// @brief Method .ctor addr 0x24a6cbc size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::Lock);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Lock, "System.Threading", "Lock");
