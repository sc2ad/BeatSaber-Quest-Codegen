#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
template<typename T>
class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Serialization {
template<::cordl_internals::il2cpp_reference_type T>
class ObjectConstructor_1<T>;
}
// Type: Newtonsoft.Json.Serialization::ObjectConstructor`1
// Type: Newtonsoft.Json.Serialization::ObjectConstructor`1
namespace Newtonsoft::Json::Serialization {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11907)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11907), inst: 2 })
// CS Name: Newtonsoft.Json.Serialization.ObjectConstructor`1
class CORDL_TYPE ObjectConstructor_1<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ObjectConstructor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectConstructor_1", modifiers: " const&", def_value: None }]
constexpr ObjectConstructor_1(ObjectConstructor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectConstructor_1", modifiers: "&&", def_value: None }]
constexpr ObjectConstructor_1(ObjectConstructor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectConstructor_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ObjectConstructor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectConstructor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectConstructor_1& operator=(ObjectConstructor_1&& o) noexcept = default;
  constexpr ObjectConstructor_1& operator=(ObjectConstructor_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ObjectConstructor_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::IAsyncResult BeginInvoke(::ArrayW<::bs_hook::Il2CppWrapperType> args, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Serialization::ObjectConstructor_1, "Newtonsoft.Json.Serialization", "ObjectConstructor`1");
