#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ObjRefSurrogate;
}
// Type: System.Runtime.Remoting.Messaging::ObjRefSurrogate
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3180))
// CS Name: System.Runtime.Remoting.Messaging.ObjRefSurrogate
class CORDL_TYPE ObjRefSurrogate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializationSurrogate
constexpr operator  ::System::Runtime::Serialization::ISerializationSurrogate() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ObjRefSurrogate() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjRefSurrogate", modifiers: " const&", def_value: None }]
constexpr ObjRefSurrogate(ObjRefSurrogate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjRefSurrogate", modifiers: "&&", def_value: None }]
constexpr ObjRefSurrogate(ObjRefSurrogate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjRefSurrogate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjRefSurrogate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjRefSurrogate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjRefSurrogate& operator=(ObjRefSurrogate&& o) noexcept = default;
  constexpr ObjRefSurrogate& operator=(ObjRefSurrogate const& o) noexcept = default;
                


// Methods

/// @brief Method GetObjectData addr 0x2345944 size 0x10c virtual true final false
 void GetObjectData(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::SerializationInfo si, ::System::Runtime::Serialization::StreamingContext sc) ;

/// @brief Method SetObjectData addr 0x2345a50 size 0x50 virtual true final false
 ::bs_hook::Il2CppWrapperType SetObjectData(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::SerializationInfo si, ::System::Runtime::Serialization::StreamingContext sc, ::System::Runtime::Serialization::ISurrogateSelector selector) ;

// Ctor Parameters []
explicit ObjRefSurrogate() ;

/// @brief Method .ctor addr 0x2345aa0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ObjRefSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ObjRefSurrogate, "System.Runtime.Remoting.Messaging", "ObjRefSurrogate");
