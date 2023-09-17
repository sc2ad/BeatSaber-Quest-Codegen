#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class ObjRefSurrogate;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Remoting::Messaging {
class RemotingSurrogate;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class RemotingSurrogateSelector;
}
// Type: System.Runtime.Remoting.Messaging::RemotingSurrogateSelector
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3181))
// CS Name: System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
class CORDL_TYPE RemotingSurrogateSelector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISurrogateSelector
constexpr operator  ::System::Runtime::Serialization::ISurrogateSelector() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RemotingSurrogateSelector() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingSurrogateSelector", modifiers: " const&", def_value: None }]
constexpr RemotingSurrogateSelector(RemotingSurrogateSelector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingSurrogateSelector", modifiers: "&&", def_value: None }]
constexpr RemotingSurrogateSelector(RemotingSurrogateSelector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemotingSurrogateSelector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RemotingSurrogateSelector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemotingSurrogateSelector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemotingSurrogateSelector& operator=(RemotingSurrogateSelector&& o) noexcept = default;
  constexpr RemotingSurrogateSelector& operator=(RemotingSurrogateSelector const& o) noexcept = default;
                


// Fields

static ::System::Type __declspec(property(get=__get_s_cachedTypeObjRef, put=__set_s_cachedTypeObjRef))  s_cachedTypeObjRef;

static void __set_s_cachedTypeObjRef(::System::Type value) ;

static ::System::Type __get_s_cachedTypeObjRef() ;

static ::System::Runtime::Remoting::Messaging::ObjRefSurrogate __declspec(property(get=__get__objRefSurrogate, put=__set__objRefSurrogate))  _objRefSurrogate;

static void __set__objRefSurrogate(::System::Runtime::Remoting::Messaging::ObjRefSurrogate value) ;

static ::System::Runtime::Remoting::Messaging::ObjRefSurrogate __get__objRefSurrogate() ;

static ::System::Runtime::Remoting::Messaging::RemotingSurrogate __declspec(property(get=__get__objRemotingSurrogate, put=__set__objRemotingSurrogate))  _objRemotingSurrogate;

static void __set__objRemotingSurrogate(::System::Runtime::Remoting::Messaging::RemotingSurrogate value) ;

static ::System::Runtime::Remoting::Messaging::RemotingSurrogate __get__objRemotingSurrogate() ;

 ::System::Runtime::Serialization::ISurrogateSelector __declspec(property(get=__get__next, put=__set__next))  _next;

constexpr void __set__next(::System::Runtime::Serialization::ISurrogateSelector value) ;

constexpr ::System::Runtime::Serialization::ISurrogateSelector __get__next() const;


// Methods

// Ctor Parameters []
explicit RemotingSurrogateSelector() ;

/// @brief Method .ctor addr 0x2337d78 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetSurrogate addr 0x2345aa8 size 0x194 virtual true final false
 ::System::Runtime::Serialization::ISerializationSurrogate GetSurrogate(::System::Type type, ::System::Runtime::Serialization::StreamingContext context, ByRef<::System::Runtime::Serialization::ISurrogateSelector> ssout) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector, "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector");
