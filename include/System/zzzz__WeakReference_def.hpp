#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System {
class WeakReference;
}
// Type: System::WeakReference
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2641))
// CS Name: System.WeakReference
class CORDL_TYPE WeakReference : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~WeakReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "WeakReference", modifiers: " const&", def_value: None }]
constexpr WeakReference(WeakReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WeakReference", modifiers: "&&", def_value: None }]
constexpr WeakReference(WeakReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WeakReference(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WeakReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WeakReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WeakReference& operator=(WeakReference&& o) noexcept = default;
  constexpr WeakReference& operator=(WeakReference const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_isLongReference, put=__set_isLongReference))  isLongReference;

constexpr void __set_isLongReference(bool value) ;

constexpr bool __get_isLongReference() const;

 ::System::Runtime::InteropServices::GCHandle __declspec(property(get=__get_gcHandle, put=__set_gcHandle))  gcHandle;

constexpr void __set_gcHandle(::System::Runtime::InteropServices::GCHandle value) ;

constexpr ::System::Runtime::InteropServices::GCHandle __get_gcHandle() const;


// Properties

 bool __declspec(property(get=get_IsAlive))  IsAlive;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Target, put=set_Target))  Target;

 bool __declspec(property(get=get_TrackResurrection))  TrackResurrection;


// Methods

/// @brief Method AllocateHandle addr 0x249bca0 size 0x28 virtual false final false
 void AllocateHandle(::bs_hook::Il2CppWrapperType target) ;

// Ctor Parameters []
explicit WeakReference() ;

/// @brief Method .ctor addr 0x249bcc8 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit WeakReference(::bs_hook::Il2CppWrapperType target) ;

/// @brief Method .ctor addr 0x249bcd0 size 0x30 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "trackResurrection", ty: "bool", modifiers: "", def_value: None }]
explicit WeakReference(::bs_hook::Il2CppWrapperType target, bool trackResurrection) ;

/// @brief Method .ctor addr 0x249bd00 size 0x34 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, bool trackResurrection) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit WeakReference(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x249bd34 size 0x138 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_IsAlive addr 0x249be6c size 0x20 virtual true final false
 bool get_IsAlive() ;

/// @brief Method get_Target addr 0x249be8c size 0x34 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Target() ;

/// @brief Method set_Target addr 0x249bec0 size 0xc virtual true final false
 void set_Target(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_TrackResurrection addr 0x249becc size 0x8 virtual true final false
 bool get_TrackResurrection() ;

/// @brief Method Finalize addr 0x249bed4 size 0x9c virtual true final false
 void Finalize() ;

/// @brief Method GetObjectData addr 0x249bf70 size 0x184 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::WeakReference);
DEFINE_IL2CPP_ARG_TYPE(::System::WeakReference, "System", "WeakReference");
