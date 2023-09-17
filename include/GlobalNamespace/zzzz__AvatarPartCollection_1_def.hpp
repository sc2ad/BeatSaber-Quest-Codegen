#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class AvatarPartCollection_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class AvatarPartCollection_1<T>;
}
// Type: ::AvatarPartCollection`1
// Type: ::AvatarPartCollection`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4771))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4771), inst: 2 })
// CS Name: AvatarPartCollection`1
class CORDL_TYPE AvatarPartCollection_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AvatarPartCollection_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartCollection_1", modifiers: " const&", def_value: None }]
constexpr AvatarPartCollection_1(AvatarPartCollection_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartCollection_1", modifiers: "&&", def_value: None }]
constexpr AvatarPartCollection_1(AvatarPartCollection_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarPartCollection_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AvatarPartCollection_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarPartCollection_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarPartCollection_1& operator=(AvatarPartCollection_1&& o) noexcept = default;
  constexpr AvatarPartCollection_1& operator=(AvatarPartCollection_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::Dictionary_2<::StringW,T> __declspec(property(get=__get__partById, put=__set__partById))  _partById;

constexpr void __set__partById(::System::Collections::Generic::Dictionary_2<::StringW,T> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,T> __get__partById() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> __declspec(property(get=__get__partIndexById, put=__set__partIndexById))  _partIndexById;

constexpr void __set__partIndexById(::System::Collections::Generic::Dictionary_2<::StringW,int32_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> __get__partIndexById() const;

 ::ArrayW<T> __declspec(property(get=__get__parts, put=__set__parts))  _parts;

constexpr void __set__parts(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__parts() const;


// Properties

 int32_t __declspec(property(get=get_count))  count;

 ::ArrayW<T> __declspec(property(get=get_parts))  parts;


// Methods

/// @brief Method get_count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_count() ;

/// @brief Method get_parts addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> get_parts() ;

// Ctor Parameters [CppParam { name: "parts", ty: "::ArrayW<T>", modifiers: "", def_value: None }]
explicit AvatarPartCollection_1(::ArrayW<T> parts) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> parts) ;

/// @brief Method GetById addr 0x0 size 0xffffffffffffffff virtual false final false
 T GetById(::StringW id) ;

/// @brief Method GetRandom addr 0x0 size 0xffffffffffffffff virtual false final false
 T GetRandom() ;

/// @brief Method GetByIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 T GetByIndex(int32_t index) ;

/// @brief Method GetIndexById addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetIndexById(::StringW id) ;

/// @brief Method GetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 T GetDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AvatarPartCollection_1, "", "AvatarPartCollection`1");
