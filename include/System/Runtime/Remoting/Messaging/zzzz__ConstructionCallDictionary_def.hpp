#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ConstructionCallDictionary;
}
// Type: System.Runtime.Remoting.Messaging::ConstructionCallDictionary
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3173))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3157))
// CS Name: System.Runtime.Remoting.Messaging.ConstructionCallDictionary
class CORDL_TYPE ConstructionCallDictionary : public System::Runtime::Remoting::Messaging::MessageDictionary {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ConstructionCallDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionCallDictionary", modifiers: " const&", def_value: None }]
constexpr ConstructionCallDictionary(ConstructionCallDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionCallDictionary", modifiers: "&&", def_value: None }]
constexpr ConstructionCallDictionary(ConstructionCallDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstructionCallDictionary(void* ptr) noexcept : System::Runtime::Remoting::Messaging::MessageDictionary(ptr) {
}


  constexpr ConstructionCallDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstructionCallDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstructionCallDictionary& operator=(ConstructionCallDictionary&& o) noexcept = default;
  constexpr ConstructionCallDictionary& operator=(ConstructionCallDictionary const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_InternalKeys, put=__set_InternalKeys))  InternalKeys;

static void __set_InternalKeys(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_InternalKeys() ;


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "System::Runtime::Remoting::Activation::IConstructionCallMessage", modifiers: "", def_value: None }]
explicit ConstructionCallDictionary(System::Runtime::Remoting::Activation::IConstructionCallMessage message) ;

/// @brief Method .ctor addr 0x233ef78 size 0x7c virtual false final false
 void _ctor(System::Runtime::Remoting::Activation::IConstructionCallMessage message) ;

/// @brief Method GetMethodProperty addr 0x233ff20 size 0x3ac virtual true final false
 ::bs_hook::Il2CppWrapperType GetMethodProperty(::StringW key) ;

/// @brief Method SetMethodProperty addr 0x234080c size 0x26c virtual true final false
 void SetMethodProperty(::StringW key, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::ConstructionCallDictionary);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ConstructionCallDictionary, "System.Runtime.Remoting.Messaging", "ConstructionCallDictionary");
