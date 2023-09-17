#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class CADSerializer;
}
// Type: System.Runtime.Remoting.Channels::CADSerializer
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3115))
// CS Name: System.Runtime.Remoting.Channels.CADSerializer
class CORDL_TYPE CADSerializer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CADSerializer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CADSerializer", modifiers: " const&", def_value: None }]
constexpr CADSerializer(CADSerializer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CADSerializer", modifiers: "&&", def_value: None }]
constexpr CADSerializer(CADSerializer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CADSerializer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CADSerializer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CADSerializer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CADSerializer& operator=(CADSerializer&& o) noexcept = default;
  constexpr CADSerializer& operator=(CADSerializer const& o) noexcept = default;
                


// Methods

/// @brief Method DeserializeMessage addr 0x2337774 size 0x40 virtual false final false
static ::System::Runtime::Remoting::Messaging::IMessage DeserializeMessage(::System::IO::MemoryStream mem, ::System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

/// @brief Method SerializeMessage addr 0x23371c0 size 0xf0 virtual false final false
static ::System::IO::MemoryStream SerializeMessage(::System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method DeserializeObjectSafe addr 0x2337d80 size 0xa0 virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObjectSafe(::ArrayW<uint8_t> mem) ;

/// @brief Method SerializeObject addr 0x2337ea8 size 0xf0 virtual false final false
static ::System::IO::MemoryStream SerializeObject(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method DeserializeObject addr 0x2337e20 size 0x88 virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObject(::System::IO::MemoryStream mem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Channels::CADSerializer);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::CADSerializer, "System.Runtime.Remoting.Channels", "CADSerializer");
