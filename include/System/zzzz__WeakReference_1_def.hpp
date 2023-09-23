#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
template<typename T>
class WeakReference_1;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T>
class WeakReference_1<T>;
}
// Type: System::WeakReference`1
// Type: System::WeakReference`1
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2642))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2642), inst: 2 })
// CS Name: System.WeakReference`1
class CORDL_TYPE WeakReference_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~WeakReference_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "WeakReference_1", modifiers: " const&", def_value: None }]
constexpr WeakReference_1(WeakReference_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WeakReference_1", modifiers: "&&", def_value: None }]
constexpr WeakReference_1(WeakReference_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WeakReference_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WeakReference_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WeakReference_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WeakReference_1& operator=(WeakReference_1&& o) noexcept = default;
  constexpr WeakReference_1& operator=(WeakReference_1 const& o) noexcept = default;
                


// Fields

 System::Runtime::InteropServices::GCHandle __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(System::Runtime::InteropServices::GCHandle value) ;

constexpr System::Runtime::InteropServices::GCHandle __get_handle() const;

 bool __declspec(property(get=__get_trackResurrection, put=__set_trackResurrection))  trackResurrection;

constexpr void __set_trackResurrection(bool value) ;

constexpr bool __get_trackResurrection() const;


// Methods

// Ctor Parameters [CppParam { name: "target", ty: "T", modifiers: "", def_value: None }]
explicit WeakReference_1(T target) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T target) ;

// Ctor Parameters [CppParam { name: "target", ty: "T", modifiers: "", def_value: None }, CppParam { name: "trackResurrection", ty: "bool", modifiers: "", def_value: None }]
explicit WeakReference_1(T target, bool trackResurrection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T target, bool trackResurrection) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit WeakReference_1(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method SetTarget addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetTarget(T target) ;

/// @brief Method TryGetTarget addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetTarget(ByRef<T> target) ;

/// @brief Method Finalize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::WeakReference_1, "System", "WeakReference`1");
