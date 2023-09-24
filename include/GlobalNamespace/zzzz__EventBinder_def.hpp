#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EventBinder;
}
// Type: ::EventBinder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13796))
// CS Name: EventBinder
class CORDL_TYPE EventBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EventBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBinder", modifiers: " const&", def_value: None }]
constexpr EventBinder(EventBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBinder", modifiers: "&&", def_value: None }]
constexpr EventBinder(EventBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventBinder& operator=(EventBinder&& o) noexcept = default;
  constexpr EventBinder& operator=(EventBinder const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Action> __declspec(property(get=__get__unsubscribes, put=__set__unsubscribes))  _unsubscribes;

constexpr void __set__unsubscribes(System::Collections::Generic::List_1<System::Action> value) ;

constexpr System::Collections::Generic::List_1<System::Action> __get__unsubscribes() const;


// Methods

/// @brief Method Bind addr 0x1f776b0 size 0xcc virtual false final false
 void Bind(System::Action subscribe, System::Action unsubscribe) ;

/// @brief Method ClearAllBindings addr 0x1f7777c size 0x18c virtual false final false
 void ClearAllBindings() ;

static GlobalNamespace::EventBinder New_ctor() ;

/// @brief Method .ctor addr 0x1f77908 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EventBinder);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EventBinder, "", "EventBinder");
