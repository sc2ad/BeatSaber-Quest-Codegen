#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__UnmodifiableSet_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System {
class Array;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableSetProxy;
}
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableSetProxy
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1789))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1790))
// CS Name: Org.BouncyCastle.Utilities.Collections.UnmodifiableSetProxy
class CORDL_TYPE UnmodifiableSetProxy : public Org::BouncyCastle::Utilities::Collections::UnmodifiableSet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnmodifiableSetProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableSetProxy", modifiers: " const&", def_value: None }]
constexpr UnmodifiableSetProxy(UnmodifiableSetProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableSetProxy", modifiers: "&&", def_value: None }]
constexpr UnmodifiableSetProxy(UnmodifiableSetProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnmodifiableSetProxy(void* ptr) noexcept : Org::BouncyCastle::Utilities::Collections::UnmodifiableSet(ptr) {
}


  constexpr UnmodifiableSetProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnmodifiableSetProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnmodifiableSetProxy& operator=(UnmodifiableSetProxy&& o) noexcept = default;
  constexpr UnmodifiableSetProxy& operator=(UnmodifiableSetProxy const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_s() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

static Org::BouncyCastle::Utilities::Collections::UnmodifiableSetProxy New_ctor(Org::BouncyCastle::Utilities::Collections::ISet s) ;

/// @brief Method .ctor addr 0x10cb3d0 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Utilities::Collections::ISet s) ;

/// @brief Method Contains addr 0x10cf030 size 0xac virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method CopyTo addr 0x10cf0dc size 0xb8 virtual true final false
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method get_Count addr 0x10cf194 size 0xa4 virtual true final false
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x10cf238 size 0xa0 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_IsEmpty addr 0x10cf2d8 size 0xa4 virtual true final false
 bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize addr 0x10cf37c size 0xa4 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x10cf420 size 0xa4 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x10cf4c4 size 0xa4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::UnmodifiableSetProxy);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::UnmodifiableSetProxy, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableSetProxy");
