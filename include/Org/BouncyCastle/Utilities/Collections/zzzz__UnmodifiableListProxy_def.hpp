#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__UnmodifiableList_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class Array;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableListProxy;
}
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableListProxy
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1787))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1788))
// CS Name: Org.BouncyCastle.Utilities.Collections.UnmodifiableListProxy
class CORDL_TYPE UnmodifiableListProxy : public ::Org::BouncyCastle::Utilities::Collections::UnmodifiableList {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnmodifiableListProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableListProxy", modifiers: " const&", def_value: None }]
constexpr UnmodifiableListProxy(UnmodifiableListProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableListProxy", modifiers: "&&", def_value: None }]
constexpr UnmodifiableListProxy(UnmodifiableListProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnmodifiableListProxy(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::Collections::UnmodifiableList(ptr) {
}


  constexpr UnmodifiableListProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnmodifiableListProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnmodifiableListProxy& operator=(UnmodifiableListProxy&& o) noexcept = default;
  constexpr UnmodifiableListProxy& operator=(UnmodifiableListProxy const& o) noexcept = default;
                


// Fields

 ::System::Collections::IList __declspec(property(get=__get_l, put=__set_l))  l;

constexpr void __set_l(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_l() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

// Ctor Parameters [CppParam { name: "l", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
explicit UnmodifiableListProxy(::System::Collections::IList l) ;

/// @brief Method .ctor addr 0x10cb3a8 size 0x28 virtual false final false
 void _ctor(::System::Collections::IList l) ;

/// @brief Method Contains addr 0x10ce8f8 size 0xac virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method CopyTo addr 0x10ce9a4 size 0xb8 virtual true final false
 void CopyTo(::System::Array array, int32_t index) ;

/// @brief Method get_Count addr 0x10cea5c size 0xa4 virtual true final false
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x10ceb00 size 0xa0 virtual true final false
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method IndexOf addr 0x10ceba0 size 0xac virtual true final false
 int32_t IndexOf(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method get_IsFixedSize addr 0x10cec4c size 0xa4 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x10cecf0 size 0xa4 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x10ced94 size 0xa4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method GetValue addr 0x10cee38 size 0xa8 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(int32_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableListProxy");
