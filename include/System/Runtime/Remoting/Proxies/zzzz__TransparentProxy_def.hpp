#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Mono {
struct RuntimeRemoteClassHandle;
}
namespace System {
class RuntimeType;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
// Forward declare root types
namespace System::Runtime::Remoting::Proxies {
class TransparentProxy;
}
// Type: System.Runtime.Remoting.Proxies::TransparentProxy
namespace System::Runtime::Remoting::Proxies {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3083))
// CS Name: System.Runtime.Remoting.Proxies.TransparentProxy
class CORDL_TYPE TransparentProxy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TransparentProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransparentProxy", modifiers: " const&", def_value: None }]
constexpr TransparentProxy(TransparentProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransparentProxy", modifiers: "&&", def_value: None }]
constexpr TransparentProxy(TransparentProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransparentProxy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TransparentProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransparentProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransparentProxy& operator=(TransparentProxy&& o) noexcept = default;
  constexpr TransparentProxy& operator=(TransparentProxy const& o) noexcept = default;
                


// Fields

 System::Runtime::Remoting::Proxies::RealProxy __declspec(property(get=__get__rp, put=__set__rp))  _rp;

constexpr void __set__rp(System::Runtime::Remoting::Proxies::RealProxy value) ;

constexpr System::Runtime::Remoting::Proxies::RealProxy __get__rp() const;

 Mono::RuntimeRemoteClassHandle __declspec(property(get=__get__class, put=__set__class))  _class;

constexpr void __set__class(Mono::RuntimeRemoteClassHandle value) ;

constexpr Mono::RuntimeRemoteClassHandle __get__class() const;

 bool __declspec(property(get=__get__custom_type_info, put=__set__custom_type_info))  _custom_type_info;

constexpr void __set__custom_type_info(bool value) ;

constexpr bool __get__custom_type_info() const;


// Properties

 bool __declspec(property(get=get_IsContextBoundObject))  IsContextBoundObject;

 System::Runtime::Remoting::Contexts::Context __declspec(property(get=get_TargetContext))  TargetContext;


// Methods

/// @brief Method GetProxyType addr 0x232a324 size 0xd0 virtual false final false
 System::RuntimeType GetProxyType() ;

/// @brief Method get_IsContextBoundObject addr 0x232a3f4 size 0x1c virtual false final false
 bool get_IsContextBoundObject() ;

/// @brief Method get_TargetContext addr 0x232a410 size 0x1c virtual false final false
 System::Runtime::Remoting::Contexts::Context get_TargetContext() ;

/// @brief Method InCurrentContext addr 0x232a42c size 0x40 virtual false final false
 bool InCurrentContext() ;

/// @brief Method LoadRemoteFieldNew addr 0x232a46c size 0x2d8 virtual false final false
 ::bs_hook::Il2CppWrapperType LoadRemoteFieldNew(::cordl_internals::intptr_t classPtr, ::cordl_internals::intptr_t fieldPtr) ;

/// @brief Method StoreRemoteField addr 0x232b150 size 0x2d8 virtual false final false
 void StoreRemoteField(::cordl_internals::intptr_t classPtr, ::cordl_internals::intptr_t fieldPtr, ::bs_hook::Il2CppWrapperType arg) ;

static System::Runtime::Remoting::Proxies::TransparentProxy New_ctor() ;

/// @brief Method .ctor addr 0x232b428 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Proxies
NEED_NO_BOX(System::Runtime::Remoting::Proxies::TransparentProxy);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Proxies::TransparentProxy, "System.Runtime.Remoting.Proxies", "TransparentProxy");
