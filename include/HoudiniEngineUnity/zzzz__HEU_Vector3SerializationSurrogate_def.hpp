#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Vector3SerializationSurrogate;
}
// Type: HoudiniEngineUnity::HEU_Vector3SerializationSurrogate
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9556))
// CS Name: HoudiniEngineUnity.HEU_Vector3SerializationSurrogate
class CORDL_TYPE HEU_Vector3SerializationSurrogate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializationSurrogate
constexpr operator  ::System::Runtime::Serialization::ISerializationSurrogate() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_Vector3SerializationSurrogate() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Vector3SerializationSurrogate", modifiers: " const&", def_value: None }]
constexpr HEU_Vector3SerializationSurrogate(HEU_Vector3SerializationSurrogate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Vector3SerializationSurrogate", modifiers: "&&", def_value: None }]
constexpr HEU_Vector3SerializationSurrogate(HEU_Vector3SerializationSurrogate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_Vector3SerializationSurrogate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_Vector3SerializationSurrogate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_Vector3SerializationSurrogate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_Vector3SerializationSurrogate& operator=(HEU_Vector3SerializationSurrogate&& o) noexcept = default;
  constexpr HEU_Vector3SerializationSurrogate& operator=(HEU_Vector3SerializationSurrogate const& o) noexcept = default;
                


// Methods

/// @brief Method System.Runtime.Serialization.ISerializationSurrogate.GetObjectData addr 0x1fdcb44 size 0xf4 virtual true final true
 void System_Runtime_Serialization_ISerializationSurrogate_GetObjectData(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializationSurrogate.SetObjectData addr 0x1fdcc38 size 0x1fc virtual true final true
 ::bs_hook::Il2CppWrapperType System_Runtime_Serialization_ISerializationSurrogate_SetObjectData(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ISurrogateSelector selector) ;

// Ctor Parameters []
explicit HEU_Vector3SerializationSurrogate() ;

/// @brief Method .ctor addr 0x1fdbf44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Vector3SerializationSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Vector3SerializationSurrogate, "HoudiniEngineUnity", "HEU_Vector3SerializationSurrogate");
